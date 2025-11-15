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

float Particle::getRadius() {
    return this->RADIUS;
}

void Particle::setRadius(float radius) {
    this->RADIUS = radius;
}

std::shared_ptr<Momentum> Particle::getMomentum() {
    return this->MOMENTUM;
}

void Particle::setMomentum(std::shared_ptr<Momentum> momentum) {
    this->MOMENTUM->mass = momentum->mass;
    this->MOMENTUM->velocity = momentum->velocity;
}

float Particle::getMass() {
    return this->MOMENTUM->mass;
}

void Particle::setMass(float mass) {
    this->MOMENTUM->mass = mass;
}

float Particle::getVelocity() {
    return this->MOMENTUM->velocity;
}

void Particle::setVelocity(float velocity) {
    this->MOMENTUM->velocity = velocity;
}

void Particle::display(){
    std::cout << "Particle(POS=[" << this->getX() << ", " << this->getY() 
              << "], RADIUS=" << this->getRadius() 
              << ", MASS=" << this->getMass()
              << ", VELOCITY=" << this->getVelocity() << ")\n";
}