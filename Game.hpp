#pragma once
#include "Stack.hpp"
#include <vector>
using namespace hanoi;

class Game {
    public:
        Game();
        void solve();
        friend std::ostream& operator<<(std::ostream & os, const Game & game);
    private:
        std::vector<Stack> stacks_;
};