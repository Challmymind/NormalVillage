#include <game/Map.hpp>
#include <game/Character.hpp>
#include <iostream>
#include <GLFW/glfw3.h>

int main(){
    Map map(10);
    Character character(0, 0);

    // Starts window library.
    glfwInit();
    // Inits window.
    GLFWwindow * window = glfwCreateWindow(800, 800, "NormalVillage", nullptr, nullptr);

    while(!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        if(glfwGetKey(window, GLFW_KEY_A) == GLFW_RELEASE) {
            // std::cout << "X" << std::endl;
            // character.Move(LEFT, &map);
            // std::cout << character.GetCharacterPosition().positionX << " " << character.GetCharacterPosition().positionY << std::endl;
        }
        if(glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
            // character.Move(RIGHT, &map);
            // std::cout << character.GetCharacterPosition().positionX << " " << character.GetCharacterPosition().positionY << std::endl;
        }
        if(glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
            // character.Move(UP, &map);
            // std::cout << character.GetCharacterPosition().positionX << " " << character.GetCharacterPosition().positionY << std::endl;
        }
        if(glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
            // character.Move(DOWN, &map);
            // std::cout << character.GetCharacterPosition().positionX << " " << character.GetCharacterPosition().positionY << std::endl;
        }

    }

    glfwTerminate();
}