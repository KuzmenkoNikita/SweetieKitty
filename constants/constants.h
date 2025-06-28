#pragma once
#include <cstdint>

namespace constants {

enum class PieceType: uint8_t {
    Pawn,
    Rook,
    Knight,
    Bishop,
    Queen,
    King
};

enum class Color : uint8_t {
    Black,
    White
};

}