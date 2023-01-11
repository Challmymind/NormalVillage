#ifndef __MAP__
#define __MAP__

class Map {
    public:
        Map(int size);
        ~Map();
        // Gets x,y value.
        int CheckPosition(int x, int y);
    private:
        int _mapSize;
        int ** _intsMap;
};


#endif