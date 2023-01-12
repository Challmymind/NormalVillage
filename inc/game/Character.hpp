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

enum MoveRules {
    SPACE = 1,
    WALL = 2,
    ITEM = 4,
};


class Character : public ObjectBase {
    public:
        // Spawns character on given location.
        Character(int x, int y);
        // Sets map and rules. Must be set bofore any other Character methods.
        void SetupMap(Map * map, int rules);
        // Moves character by  1 in given direction if possible on given map.
        bool Move(Directions direction);
        // Check surroundings for instance in givrm range.
        [[nodiscard]] bool CheckSurroundings(int instance, int range = 1) const;
        // Check surroundings for instance in given range and returns position.
        [[nodiscard]] bool CheckSurroundings(int instance, int * instanceX, int * instanceY, int range = 1) const;


    protected:
        // Current map.
        Map * _currentMap;
        // Current map rules.
        int _moveRules;


};

#endif