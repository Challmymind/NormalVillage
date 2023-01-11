#ifndef __OBJECTBASE__
#define __OBJECTBASE__

typedef struct POSITONSTRUCT {
    int positionX;
    int positionY;
}   POSITION;

class ObjectBase {
    public:
        virtual POSITION GetPosition() {
            return POSITION{_position};
        }
        virtual void ChangePosition(int x, int y){
            _position.positionX = x;
            _position.positionY = y;
        }
    private:
        POSITION _position;
};

#endif