#include "game.h"
#include <cstdlib>
game::game()
{
    m_isGameActive = true;
    m_clockLastFrame = 0;
}

void game::setupGame()
{
    srand( time( 0 ));
}

void game::initialize()
{

}

bool game::frame()
{
    clock_t clockNow = clock();
    clock_t deltaClock = clockNow - m_clockLastFrame;
    float deltaTime = float(deltaClock);
    m_clockLastFrame = clockNow;

    render();
    update(deltaTime);

    return m_isGameActive;
}

void game::shutdown()
{

}

void game::render()
{

}

void game::update(float dt)
{

}
