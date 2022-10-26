#pragma once

#include <SDL.h>
#include "Bullet.hpp"
#include <list>
#include "Tank-turret.hpp"
#include "Tank-body.hpp"
#include "Tank.hpp"
#include <vector>
using namespace std;
class BattleField
{
    list<Bullet> bullets;
    list<myTank> tanks;
    SDL_Renderer *gRenderer;
    SDL_Texture *assets;

    public:
        BattleField(SDL_Renderer *, SDL_Texture *);
        void drawObjects();
        void createObject(int, int);
        void fire();
};