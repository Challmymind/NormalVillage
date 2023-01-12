#include <game/Character.hpp>

Character::Character(int x, int y){
    this->ChangePosition(x, y);
    _currentMap = nullptr;
}

void Character::SetupMap(Map *map, int rules){
    _currentMap = map;
    _moveRules = rules;
}

bool Character::Move(Directions direction){

    if(_currentMap == nullptr){
        return false;
    }

    POSITION pos = this->GetPosition();

    switch (direction) {
        case UP:
            pos.positionY += 1;
            break;
        case DOWN:
            pos.positionY -= 1;
            break;
        case RIGHT:
            pos.positionX += 1;
            break;
        case LEFT:
            pos.positionX -= 1;
            break;
    }

    int mapResult = _currentMap->CheckPosition(pos.positionX, pos.positionY);

    if(mapResult < 0) return false;

    if((mapResult | _moveRules) != _moveRules) return false;

    this->ChangePosition(pos.positionX, pos.positionY);

    return true;
}

bool Character::CheckSurroundings(int instance, int range) const {

    if(_currentMap == nullptr){
        return false;
    }

    POSITION pos = this->GetPosition();
    
    for(int x = -range; x <= range; x++){
        for(int y = -range; y <= range; y++){
            if(_currentMap->CheckPosition(pos.positionX + x, pos.positionY + y) == instance) return true;
        }
    }
    return false;
}

bool Character::CheckSurroundings(int instance, int * instanceX, int * instanceY, int range) const {

    if(_currentMap == nullptr){
        return false;
    }

    POSITION pos = this->GetPosition();
    
    for(int x = -range; x <= range; x++){
        for(int y = -range; y <= range; y++){
            if(_currentMap->CheckPosition(pos.positionX + x, pos.positionY + y) == instance) {
                    *instanceX = pos.positionX + x;
                    *instanceY = pos.positionY + y;
                    return true;
                }
        }
    }
    return false;
}