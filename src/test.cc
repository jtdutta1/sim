#include <iostream>
#include "core/particle/particle.h"

int main() {
    std::cout << "TESTING Particle\n";

    Particle p (3, 4);
    if (p.getX() == 3)
        std::cout << "PASSED X\n";
    else 
        std::cout << "FAILED X\n";


    if (p.getY() == 4)
        std::cout << "PASSED Y\n";
    else 
        std::cout << "FAILED Y\n";
    
    return 0;
}