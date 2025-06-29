#pragma once

#include "constants.h"
#include <stdexcept>


namespace SweetieKitty_ {

class Square {

public:
    Square(int row, int column) :   row_(row), 
                                    column_(column)                               
    {
        if(row > constants::maxRowNum || column > constants::maxColumnNum) {
            throw std::runtime_error("Invalid square coordinate");
        }

        if((column % 2) != 0) {
            color_ = row % 2 != 0 ? constants::Color::Black : constants::Color::White;
        }
        else {
            color_ = row % 2 != 0 ? constants::Color::White : constants::Color::Black;
        }
    };

    auto row() const noexcept -> int
    {
        return row_;
    }

    auto column() const noexcept -> int
    {
        return column_;
    }

    auto color() const noexcept -> constants::Color 
    {
        return color_;
    }

private:
    constants::Color color_;
    int row_;
    int column_;

};

}  // namespace SweetieKitty_