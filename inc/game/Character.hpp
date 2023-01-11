#ifndef __CHARACTER__
#define __CHARACTER__

#include <base/ObjectBase.hpp>
#include <game/Map.hpp>

enum Directions {
    RIGHT,
    LEFT,
    UP,
    DOWN,
};

class Character : private ObjectBase {
    public:
        // Spawns haracter on given location.
        Character(int x, int y);
        // Moves character by  1 in given direction if possible on given map.
        bool Move(Directions direction, Map * map);
        // Returns current position. Inherited from ObjectBase.
        POSITION GetCharacterPosition();
};

#endif