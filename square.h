#pragma once

#include "constants/constants.h"
#include <stdexcept>


namespace SweetieKitty_ {

class Square {

public:
    Square(int row, int column) :   row_(row), 
                                    column_(column),
                                    color_(column % 2 ? 
                                        (row % 2 ? constants::Color::Black : constants::Color::White) : 
                                        (row % 2 ? constants::Color::White : constants::Color::Black))                                
    {
        if(row > 7 || column > 7)
            throw std::runtime_error("Invalid square coordinate");
    };

    ~Square() = default;

    int row() const noexcept
    {
        return row_;
    }

    int column() const noexcept
    {
        return column_;
    }

    constants::Color color() const noexcept 
    {
        return color_;
    }

private:
    constants::Color color_;
    int row_;
    int column_;

};

}