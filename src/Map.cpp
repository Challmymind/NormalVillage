#include <game/Map.hpp>

Map::Map(int size){

    _intsMap = new int * [size];
    for (int x = 0; x < size; x++){
        _intsMap[x] = new int[size];
    }

    for (int x = 0; x < size; x++){
        for (int y = 0; y < size; y++){
            _intsMap[x][y] = 0;
        }
    }

    _mapSize = size;
}

Map::~Map(){
    for(int x = 0; x < _mapSize; x++){
        delete [] _intsMap[x];
    }

    delete [] _intsMap;
}

int Map::CheckPosition(int x, int y){

    if (x < 0 || y < 0){
        return -1;
    }

    if (x >= _mapSize || y >= _mapSize) {
        return -1;
    }

    return _intsMap[x][y];
}