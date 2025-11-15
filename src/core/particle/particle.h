#include <vector>

class Particle{
    /*
    Class encapsulates a basic particle. It currently holds the position of a particle in a world
    */
    private:
        int POS_X, POS_Y;
    
    public:
        // Constructors
        Particle(): POS_X(0), POS_Y(0) {}
        Particle(int x, int y): POS_X(x), POS_Y(y) {}

        // Particle customizer methods
        void setPos(int x, int y);
        std::vector<int> getPos();

        int getX();
        void setX(int x);

        int getY();
        void setY(int y);


        // Show Particle
        void display();

};