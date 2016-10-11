//
// Created by swmn4471 on 2016/10/11.
//

#ifndef INC_201610PYGEOMETRY_VECTOR2_HPP
#define INC_201610PYGEOMETRY_VECTOR2_HPP

namespace pyg {
    class Vector2 {
    public:
        Vector2(float x = 0, float y = 0) x (){
            this.x = x;
            this.y = y;
        }

        Vector2 operator + (Vector2 &other) const {
            return Vector2(x + other.x, y + other.y);
        }

        Vector2 operator - (Vector2 &other) const {
            return Vector2(x - other.x, y - other.y);
        }

    private:
        float x, y;


    };
}




#endif //INC_201610PYGEOMETRY_VECTOR2_HPP
