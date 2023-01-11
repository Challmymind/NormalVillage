#include <game/Character.hpp>

Character::Character(int x, int y) {
    this->ChangePosition(x, y);
}

bool Character::Move(Directions direction, Map * map){

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

    if(map->CheckPosition(pos.positionX, pos.positionY) != 0) return false;

    this->ChangePosition(pos.positionX, pos.positionY);

    return true;
}

POSITION Character::GetCharacterPosition(){
    return POSITION(this->GetPosition());
} 