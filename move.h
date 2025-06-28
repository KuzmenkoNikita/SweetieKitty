#pragma once

#include "constants/constants.h"
#include "square.h"

namespace SweetieKitty_ {

class Move {

public:

    enum class Type : uint8_t {
        Move,
        Capture,
        EnPassant,
    };

    Type type() const noexcept 
    {
        return type_;
    }

    Square from() const noexcept
    {
        return from_;
    }

    Square to() const noexcept
    {
        return to_;
    }


private:
    Type type_;
    Square from_;
    Square to_;
};

}