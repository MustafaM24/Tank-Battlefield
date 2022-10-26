#include "Tank-turret.hpp"
// Inherit from Unit class// Inherit from Unit class
TankTurret::TankTurret() : Unit()
{
}

TankTurret::TankTurret(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast), mover(mov){
    src = {602, 0, 1109, 151};
}

void TankTurret::draw(double x, double y){
    mover.x = x;
    mover.y = y;
    Unit::draw(src, mover);
}
