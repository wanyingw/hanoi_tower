#pragma once

namespace hanoi { 
    class Cube {
        public:
            Cube(double length);
            double getLength() const;
            void setLength(double length);
        private:
            double length_;
    };
}
