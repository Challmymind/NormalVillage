#ifndef __GAME__
#define __GAME__

#include <game/Character.hpp>
#include <game/Map.hpp>
#include <GLFW/glfw3.h>

class Game {
    public:
        Game();
        ~Game();

        void Start();
        // Use after glfwPollEvents().
        void PollPlayerEvents(GLFWwindow * window);

    
    private:
        Character * _player;
        Map * _mainMap;
};

#endif