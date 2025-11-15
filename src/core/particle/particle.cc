#include <iostream>

#include "particle.h"

void Particle::setPos(int x, int y) {
    this->POS_X = x;
    this->POS_Y = y;
}

std::vector<int> Particle::getPos() {
    std::vector<int> pos = {this->POS_X, this->POS_Y};
    return pos;
}

int Particle::getX() {
    return this->POS_X;
}

void Particle::setX(int x) {
    this->POS_X = x;
}

int Particle::getY() {
    return this->POS_Y;
}

void Particle::setY(int y) {
    this->POS_Y = y;
}

void Particle::display(){
    std::vector<int> pos = this->getPos();
    std::cout << "Particle(" << pos[0] << ", " << pos[1] << ")\n";
}