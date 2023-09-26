#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Compressibility.h"
#include "mc/network/IPacketHandlerDispatcher.h"
#include "mc/network/NetworkPeer.h"
#include "mc/resources/PacketPriority.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/enums/SubClientId.h"

class Packet {
public:
    static const bool                SHARE_WITH_HANDLER = false;                                     // constant
    PacketPriority                   mPriority          = PacketPriority::Medium;                    // this+0x8
    NetworkPeer::Reliability         mReliability       = NetworkPeer::Reliability::ReliableOrdered; // this+0xC
    SubClientId                      mClientSubId       = SubClientId::PrimaryClient;                // this+0x10
    bool                             mIsHandled         = false;                                     // this+0x11
    NetworkPeer::PacketRecvTimepoint mReceiveTimepoint;                                              // this+0x18
    const IPacketHandlerDispatcher*  mHandler      = nullptr;                                        // this+0x20
    Compressibility                  mCompressible = Compressibility::Compressible;                  // this+0x28

    constexpr explicit Packet(
        PacketPriority           priority    = PacketPriority::Medium,
        NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                     compress    = true
    )
    : mPriority(priority), mReliability(reliability), mClientSubId(clientSubId) {
        if (compress) {
            mCompressible = Compressibility::Compressible;
        } else {
            mCompressible = Compressibility::Incompressible;
        }
    }

    /**
     * Send the packet to a specific server player.
     *
     * @param player The server player to send the packet to.
     */
    LLAPI void sendTo(class Player&);

    /**
     * Send the packet to all relevant players in a 2D plane at a position in a given dimension.
     * @param pos The position to send the packet to.
     * @param type The type of dimension to send the packet in.
     * @param except exclude this player.
     */
    LLAPI void sendTo(class BlockPos const&,DimensionType,optional_ref<class Player>) const;

    /**
     * Send the packet to all relevant players within a specific actor.
     *
     * @param actor The actor to send the packet to.
     * @param except exclude this player.
     */
    LLAPI void sendTo(class Actor&,optional_ref<class Player>) const;

    /**
     * Send the packet to a specific client identified by network identifier and sub-client ID.
     *
     * @param id The network identifier of the client to send the packet to.
     * @param clientId The sub-client ID of the client to send the packet to.
     */
    LLAPI void sendToClient(class NetworkIdentifier const&,enum class SubClientId) const;

    /**
     * Send the packet to all clients connected to the server.
     */
    LLAPI void sendToClients();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Packet@@UEAA@XZ
    virtual ~Packet();

    // vIndex: 1, symbol: ?getId@AddPaintingPacket@@UEBA?AW4MinecraftPacketIds@@XZ
    virtual ::MinecraftPacketIds getId() const = 0;

    // vIndex: 2, symbol:
    // ?getName@AddPaintingPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getName() const = 0;

    // vIndex: 3, symbol: ?write@AddPaintingPacket@@UEBAXAEAVBinaryStream@@@Z
    virtual void write(class BinaryStream&) const = 0;

    // vIndex: 4, symbol: ?read@Packet@@UEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // vIndex: 5, symbol: ?disallowBatching@Packet@@UEBA_NXZ
    virtual bool disallowBatching() const;

    // vIndex: 6, symbol: ?isValid@Packet@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 7, symbol:
    // ?_read@AddPaintingPacket@@EEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&) = 0;

    // symbol: ?handle@Packet@@QEAAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z
    MCAPI void handle(class NetworkIdentifier const&, class NetEventCallback&, std::shared_ptr<class Packet>&);

    // symbol:
    // ?readNoHeader@Packet@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@AEBW4SubClientId@@@Z
    MCAPI class Bedrock::Result<void> readNoHeader(class ReadOnlyBinaryStream&, ::SubClientId const&);

    // symbol: ?writeWithHeader@Packet@@QEBAXW4SubClientId@@AEAVBinaryStream@@@Z
    MCAPI void writeWithHeader(::SubClientId, class BinaryStream&) const;

    // NOLINTEND
};
