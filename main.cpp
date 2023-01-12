#include <game/Map.hpp>
#include <game/Character.hpp>
#include <iostream>
#include <GLFW/glfw3.h>
#include <Game.hpp>

int main(){
    
    Game game;
    game.Start();


    // Starts window library.
    glfwInit();
    // Inits window.
    GLFWwindow * window = glfwCreateWindow(800, 800, "NormalVillage", nullptr, nullptr);

    while(!glfwWindowShouldClose(window)) {
        // glfwPollEvents();
        glfwWaitEventsTimeout(0.8); // this needs to be replaced later
        game.PollPlayerEvents(window);
        
        

    }

    glfwTerminate();

}