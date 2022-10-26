#include "Bullet.hpp"

Bullet::Bullet(SDL_Renderer *rend, SDL_Texture *ast, SDL_Rect mov) : Unit(rend, ast), mover(mov)
{
    src = {616, 201, 302, 96};
    animate = {{39,394,92,95},{189,373,133,141},{339,362,162,165},{506,362,162,165},{681,362,154,165},{847,362,154,165},{1010,362,158,165}};
}

void Bullet::bulletDestroyed()
{
    if (destroyAnimation < 8 && alive)
    {
        src=animate[destroyAnimation];
        mover.w += 4;
        mover.h += 4;
        destroyAnimation += 1;
    }
    else
    {
        alive = false;
    }
}

void Bullet::draw()
{
    if (mover.x < 930)
    {
        mover.x += 30;
    }
    else
    {
        bulletDestroyed();
    }
    Unit::draw(src, mover);
}