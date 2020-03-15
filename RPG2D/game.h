#ifndef GAME_H
#define GAME_H
#include <ctime>

class game
{
public:
    game();
    void setupGame();
    void initialize();
    bool frame();
    void shutdown();
private:
    void render();
    void update(float dt);
private:
    bool m_isGameActive;
    clock_t m_clockLastFrame;
};

#endif // GAME_H
