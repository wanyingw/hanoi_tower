#include "Cube.hpp"
#include <iostream>

namespace hanoi {
    Cube::Cube(double length) {
        length_ = length;
    }

    double Cube::getLength() const {
        return length_;
    }
    void Cube::setLength(double length) {
        length_ = length;
    }
}