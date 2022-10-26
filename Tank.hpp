#pragma once
#include <iostream>
#include <SDL.h>
#include <list>
#include <vector>
#include "Tank-body.hpp"
#include "Tank-turret.hpp"
#include "Bullet.hpp"
using namespace std;

class myTank
{
    SDL_Rect src, mover;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;
    double myPosX;
    double myPosY; 
    double TurretPosX; 
    double TurretPosY; 
    TankTurret tankT = TankTurret(); 
    TankBody tankB = TankBody(); 
public:

    myTank(SDL_Renderer *, SDL_Texture *, int x, int y);
    void draw();
    Bullet fire();
};