struct Momentum {
    float mass;
    float velocity;

    // Constructor
    Momentum(): mass(0.0f), velocity(0.0f) {}
    Momentum(float mass, float velocity): mass(mass), velocity(velocity) {}
    Momentum(float mass): mass(mass), velocity(0.0f) {}
};