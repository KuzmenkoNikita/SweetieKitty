#pragma once

#include "square.h"
#include <cstdint>

namespace SweetieKitty_ {

class Move {

public:

    enum class Type : uint8_t {
        Move,
        Capture,
        EnPassant,
    };

    Move(Square squareFrom, Square squareTo, Type moveType) : type_(moveType),
                                                            from_(squareFrom),
                                                            to_(squareTo)
    {

    }

    auto type() const noexcept -> Type 
    {
        return type_;
    }

    auto from() const noexcept -> Square
    {
        return from_;
    }

    auto to() const noexcept -> Square
    {
        return to_;
    }


private:
    Type type_;
    Square from_;
    Square to_;
};

}  // namespace SweetieKitty_