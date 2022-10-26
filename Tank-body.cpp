
#include "Tank-body.hpp"

TankBody::TankBody() : Unit() 
{

}
TankBody::TankBody(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast), mover(mov){
    src = {0, 14, 419, 278};
}
void TankBody::draw(double x, double y){
    mover.x = x;
    mover.y = y;
    Unit::draw(src, mover);
}