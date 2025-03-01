#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class ChunkLocalHeight;
class LevelChunk;
class PerlinSimplexNoise;
struct OverworldBlendRules;
// clang-format on

class ConsoleChunkBlender {
public:
    // ConsoleChunkBlender inner types define
    enum class BlenderMode : int {
        None                    = 0,
        Overworld4J             = 1,
        OverworldCliffsAndCaves = 2,
        Nether4J                = 3,
        NetherUpdate            = 4,
        End4J                   = 5,
    };

    enum class ShiftBlockTypes : int {
        ConsoleBlend      = 0,
        TerrainGenChanged = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PerlinSimplexNoise>> mConversionBlendNoise;
    ::ll::TypedStorage<4, 16, float[2][2]>                            mInterpCorners;
    ::ll::TypedStorage<4, 1024, float[16][16]>                        mInterpTable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ConsoleChunkBlender();

    MCAPI void _blendChunkEnd4J(::LevelChunk& generatedChunk, ::LevelChunk& lc);

    MCAPI void _blendChunkNether4J(::LevelChunk& generatedChunk, ::LevelChunk& lc);

    MCAPI void _blendChunkOverworld(
        ::LevelChunk&                          generatedChunk,
        ::LevelChunk&                          lc,
        ::ConsoleChunkBlender::ShiftBlockTypes shiftBlockType
    );

    MCAPI void _copyColumnFromGeneratedChunkNether(::LevelChunk& generatedChunk, ::LevelChunk& lc, int x, int z);

    MCAPI void _copyColumnFromGeneratedChunkOverworld(
        ::LevelChunk&                          generatedChunk,
        ::LevelChunk&                          lc,
        int                                    x,
        int                                    z,
        ::ConsoleChunkBlender::ShiftBlockTypes shiftBlockType
    );

    MCAPI ::ChunkLocalHeight _findHighestStoneOrBedrockHeight(::LevelChunk& lc, int x, int z);

    MCAPI ::ChunkLocalHeight _findTopMostWaterHeight(
        ::LevelChunk&                                     lc,
        int                                               x,
        int                                               z,
        ::std::unordered_set<::BlockLegacy const*> const& waterBlocks
    );

    MCAPI void _prepInterpTable();

    MCAPI void _shiftColumnBySetBlocks(
        ::LevelChunk&                          lc,
        int                                    x,
        int                                    z,
        int                                    adj,
        bool                                   isSeaBlock,
        ::ChunkLocalHeight                     topSeaBlockHeight,
        ::ConsoleChunkBlender::ShiftBlockTypes shiftBlockType,
        ::OverworldBlendRules const&           blendRules
    );

    MCAPI ~ConsoleChunkBlender();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
