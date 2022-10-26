#include "BattleField.hpp"
#include <iostream>
bool bulletActive(const Bullet &value)
{
    return !value.alive;
}
void BattleField::drawObjects()
 // call draw functions of all the objects here
    // for(Bullet& b: bullets)
    //     b.draw();
{
    for (myTank &tank : tanks){
        tank.draw();
    }
    for (Bullet &bullet : bullets){
        bullet.draw();
    }
    bullets.remove_if(bulletActive);
}

void BattleField::createObject(int x, int y)
// {
//     SDL_Rect mov = {x, y, 30, 10}; // let's make a rectangel on x, y of the size 30, 10

//     Bullet b1(gRenderer, assets, mov);
//     bullets.push_back(b1);
//     std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
// }
{
    myTank tank(gRenderer, assets, x, y);
    tanks.push_back(tank);
    std::cout << "Mouse clicked at: (" << x << " , " << y <<")" << std::endl;
}

BattleField::BattleField(SDL_Renderer *renderer, SDL_Texture *asst) : gRenderer(renderer), assets(asst)
{
}

void BattleField::fire(){
    cout<<"F key is pressed"<<endl;
    // provide code to fire all of the tanks.
    for (myTank &tank : tanks){
        bullets.push_back(tank.fire());}
}
