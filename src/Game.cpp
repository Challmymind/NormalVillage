#include <Game.hpp>
#include <iostream>

#define MAIN_MAP_SIZE 100

#define MAIN_MAP_RULES (MoveRules::SPACE | MoveRules::ITEM)

Game::Game(){
    _mainMap = new Map(MAIN_MAP_SIZE);
    _player = new Character(0, 0); 
}

Game::~Game(){
    delete _mainMap;
    delete _player;
}

void Game::Start(){
    _player->SetupMap(_mainMap, MAIN_MAP_RULES);
}

void Game::PollPlayerEvents(GLFWwindow * window){

    bool moved = false;

    if(glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) {
        _player->Move(LEFT);
        moved = true;
    }
    if(glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) {
        _player->Move(RIGHT);
        moved = true;
    }
    if(glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) {
        _player->Move(UP);
        moved = true;
    }
    if(glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) {
        _player->Move(DOWN);
        moved = true;
    }

    if(moved) std::cout << _player->GetPosition().positionX << " " << _player->GetPosition().positionY << std::endl;

}

