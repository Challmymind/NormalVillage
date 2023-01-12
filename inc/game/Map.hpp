#ifndef __MAP__
#define __MAP__

#define DEFAULTMAPFILL 1


// Map class.
class Map {
    public:
        Map(int size);
        ~Map();
        // Gets x,y value.
        [[nodiscard]] int CheckPosition(int x, int y) const;

    protected:
        int _mapSize;
        int ** _intsMap;
};


#endif