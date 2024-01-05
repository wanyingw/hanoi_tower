#include "Game.hpp"
#include <iostream>

int main() {
    Game g;

    std::cout << "Initiate game" << std::endl;
    std::cout << g << std::endl;

    g.solve();
    
    std::cout << "Final game state: " << std::endl;
    std::cout << g << std::endl;

    return 0;
}