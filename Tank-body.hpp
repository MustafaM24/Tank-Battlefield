// New
#pragma once

#include "Unit.hpp"

class TankBody : 
    public Unit
        {
            SDL_Rect src, mover;
            public:
                TankBody(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
                TankBody();
                void draw(double, double);
        };