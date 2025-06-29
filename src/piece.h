#pragma once
#include "constants.h"

namespace SweetieKitty_ {

class Piece {
public:

    Piece(constants::PieceType type, constants::Color color, bool isMoved = false) : type_(type), 
                                                                                    color_(color), 
                                                                                    isMoved_(isMoved) {};

    auto type() const noexcept -> constants::PieceType
    {
        return type_;
    };

    auto color() const noexcept -> constants::Color
    {
        return color_;
    }

    auto isMoved() const noexcept -> bool
    {
        return isMoved_;
    }

    void setMoved() noexcept
    {
        isMoved_ = true;
    }

private:
    constants::PieceType type_;
    constants::Color color_;
    bool isMoved_ = false;
};

}  // namespace SweetieKitty_