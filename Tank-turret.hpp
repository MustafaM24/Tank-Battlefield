// Inherit from Unit class
#pragma once

#include "Unit.hpp"

class TankTurret : 
public Unit
    {
        SDL_Rect src, mover;
    public:
        TankTurret(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
        TankTurret();
        void draw(double, double);
    };