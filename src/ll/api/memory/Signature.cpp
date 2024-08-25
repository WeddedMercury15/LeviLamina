#include "ll/api/memory/Signature.h"

#include <execution>

#include "ll/api/utils/SystemUtils.h"

namespace ll::memory {

void* SignatureView::resolve() const { return resolve(sys_utils::getImageRange()); }

void* SignatureView::resolve(std::span<std::byte> range) const {
    const auto firstByte = *elements.front();
    const auto scanEnd   = range.end() - elements.size() + 1;

    for (auto i = range.begin(); i != scanEnd; i++) {
        i = std::find(std::execution::unseq, i, scanEnd, firstByte);
        if (i == scanEnd) [[unlikely]] {
            break;
        }
        if (std::equal(elements.begin() + 1, elements.end(), i + 1, std::equal_to<>{})) [[unlikely]] {
            return &*i;
        }
    }
    return nullptr;
}

std::string SignatureView::toString(bool alignWildcard, bool upperCase) const {
    std::string result;
    bool        first = true;
    for (auto& element : elements) {
        if (first) {
            first = false;
        } else {
            result += " ";
        }
        if (element.isWildcard()) {
            result += alignWildcard ? "??" : "?";
        } else {
            auto x  = static_cast<uchar>(*element);
            result += string_utils::charFromInt(upperCase, x / 16);
            result += string_utils::charFromInt(upperCase, x % 16);
        }
    }
    return result;
}

} // namespace ll::memory
