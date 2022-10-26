#pragma once

#include "Unit.hpp"
#include <vector>
#include <SDL.h>
using namespace std;

class Bullet : 
    public Unit
        {
            SDL_Rect src, mover;
            int destroyAnimation = 0; 
            bool tick = true; 
            vector<SDL_Rect> animate; 
        public:
            
            Bullet(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov);
            bool alive = true;
            void draw();
            void bulletDestroyed();
        };