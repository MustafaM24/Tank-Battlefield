#include "Tank.hpp"

myTank::myTank(SDL_Renderer *rend, SDL_Texture *ast, int x, int y) : gRenderer(rend), assets(ast)
{
    myPosX = x;
    myPosY = y;
    TurretPosX = 50;
    TurretPosY = 25;
    TankBody tankBvar(gRenderer, assets, {myPosX, myPosY, 150, 100});
    TankTurret tankTvar(gRenderer, assets, {x + TurretPosX, y + TurretPosY, 250, 50});
    tankB = tankBvar;
    tankT = tankTvar;
}
void myTank::draw()
{
    tankB.draw(myPosX, myPosY);
    tankT.draw(myPosX + TurretPosX, myPosY + TurretPosY);

    if (TurretPosX < 50){
        TurretPosX = 50;
    }
}
Bullet myTank::fire(){
    TurretPosX = 40;
    Bullet bullet(gRenderer, assets, {myPosX + TurretPosX + 170, myPosY + TurretPosY + 17, 30, 15});
    return bullet;
}