#include "Stack.hpp"
#include <exception>
#include <iostream>
using std::cout;
using std::endl;
using namespace hanoi;

void Stack::push_back(const Cube & cube) {
    // don't allow push onto a smaller cube
    if ( size() > 0 && cube.getLength() > peekTop().getLength()) {
    }
    cubes_.push_back(cube);
}
Cube Stack::removeTop() {
    Cube cube = peekTop();
    cubes_.pop_back();
    return cube;
}
Cube & Stack::peekTop() {
    return cubes_[cubes_.size()-1];
}
unsigned Stack::size() const {
    return cubes_.size();
}

std::ostream& hanoi::operator<<(std::ostream & os, const Stack & stack) {
    for (unsigned i=0; i < stack.size(); i++) {
        os << stack.cubes_[i].getLength() << " ";
    }
    os << endl;
    return os;
}