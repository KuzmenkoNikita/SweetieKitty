#pragma once
#include "constants/constants.h"

namespace SweetieKitty_ {

class Piece {
public:

    Piece(constants::PieceType type, constants::Color color, bool isMoved = false) : type_(type), 
                                                                                    color_(color), 
                                                                                    isMoved_(isMoved) {};

    virtual ~Piece() = default;

    constants::PieceType type() const noexcept
    {
        return type_;
    };

    constants::Color color() const noexcept
    {
        return color_;
    }

    bool isMoved() const noexcept
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

}