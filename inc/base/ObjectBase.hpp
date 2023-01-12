#ifndef __OBJECTBASE__
#define __OBJECTBASE__

typedef struct POSITONSTRUCT {
    int positionX;
    int positionY;
}   POSITION;

class ObjectBase {
    public:
        // Position getter.
        [[nodiscard]] POSITION GetPosition() const {
            return POSITION{_position};
        }
    protected:
        // Position setter.
        void ChangePosition(int x, int y){
            _position.positionX = x;
            _position.positionY = y;
        }
    private:
        // Position variable.
        POSITION _position = POSITION{0, 0};
};

#endif