//
// Created by VimerSu on 2016/10/11.
//

#include <cmath>


#ifndef INC_201610PYGEOMETRY_VECTOR2_HPP
#define INC_201610PYGEOMETRY_VECTOR2_HPP

using namespace std;

namespace pyg {
    struct Vector2 {
        Vector2(float _x = 0, float _y = 0) : x(_x), y(_y) {}
        Vector2(const Vector2 &other) : x (other.x), y(other.y) {}
		Vector2&operator = (const Vector2 &other) { x = other.x, y = other.y; return *this; }

        Vector2 operator + (const Vector2 &other) const { return Vector2(x + other.x, y + other.y); }
        Vector2 operator - (const Vector2 &other) const { return Vector2(x - other.x, y - other.y); }
        Vector2 operator * (const float val) { return Vector2(x * val, y * val); }
        Vector2 operator / (const float val) { return Vector2(x / val, y / val); }

        Vector2& operator += (const Vector2 &other) { x += other.x, y += other.y; return *this; }
        Vector2& operator -= (const Vector2 &other) { x += other.x, y += other.y; return *this; }
        Vector2& operator *= (const float val) { x *= val, y *= val; return *this; }
        Vector2& operator /= (const float val) { x /= val, y /= val; return *this; }

        float lengthSqr() const {return x * x + y * y; }
        float length() const { return std::sqrt(lengthSqr()); }
        float dot(const Vector2 &other) const { return x * other.x + y * other.y; }
        float cross(const Vector2 &other) const { return x * other.y - y * other.x; }

        float x, y;
    };
}




#endif //INC_201610PYGEOMETRY_VECTOR2_HPP
