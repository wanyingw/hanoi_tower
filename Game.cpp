#include "Game.hpp"
#include "Stack.hpp"
#include "Cube.hpp"
#include <iostream>
using std::cout;
using std::endl;
using namespace hanoi;

Game::Game() {
    // initiate three empty stacks for the game
    for (int i = 0; i < 3; i++) {
        Stack stackOfCubes;
        stacks_.push_back(stackOfCubes);
    }
    // Initiate the game, place cubes on the first stack
    Cube cube_1(4);
    stacks_[0].push_back(cube_1);
    Cube cube_2(3);
    stacks_[0].push_back(cube_2);
    Cube cube_3(2);
    stacks_[0].push_back(cube_3);
    Cube cube_4(1);
    stacks_[0].push_back(cube_4);
}

void Game::solve() {
}

std::ostream& operator<<(std::ostream & os, const Game & game) {
    for (unsigned i=0; i < game.stacks_.size(); i++) {
        os << "Stack[" << i << "]: " << game.stacks_[i];
    }
    return os;
}
