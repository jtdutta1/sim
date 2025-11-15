#include <vector>
#include <memory>
#include "motion.h"

class Particle{
    /*
    Class encapsulates a basic particle (a circle). It has the following properties
    - Position (Current position in a 2D plane)
    - Momentum (Record of motion possesed by the body. Will store both mass and velocity)
    - Radius (Size of the particle)
    */
    private:
        int POS_X, POS_Y;
        std::shared_ptr<Momentum> MOMENTUM;
        float RADIUS;
    public:
        // Constructors
        Particle(): POS_X(0), POS_Y(0), MOMENTUM(std::make_shared<Momentum>()), RADIUS(1.0f) {}
        Particle(int x, int y): POS_X(x), POS_Y(y), MOMENTUM(std::make_shared<Momentum>()), RADIUS(1.0f) {}
        Particle(int x, int y, float r): POS_X(x), POS_Y(y), MOMENTUM(std::make_shared<Momentum>()), RADIUS(r) {}
        Particle(int x, int y, std::shared_ptr<Momentum> momentum): POS_X(x), POS_Y(y), MOMENTUM(std::make_shared<Momentum>(momentum->mass, momentum->velocity)), RADIUS(1.0f) {}
        Particle(int x, int y, std::shared_ptr<Momentum> momentum, float r): POS_X(x), POS_Y(y), MOMENTUM(std::make_shared<Momentum>(momentum->mass, momentum->velocity)), RADIUS(r) {}

        // Particle customizer methods
        void setPos(int x, int y);
        std::vector<int> getPos();

        int getX();
        void setX(int x);

        int getY();
        void setY(int y);

        float getRadius();
        void setRadius(float radius);

        std::shared_ptr<Momentum> getMomentum();
        void setMomentum(std::shared_ptr<Momentum> momentum);

        float getMass();
        void setMass(float mass);

        float getVelocity();
        void setVelocity(float velocity);


        // Show Particle
        void display();

};