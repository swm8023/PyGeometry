//
// Created by VimerSu on 2016/10/12.
//

#ifndef PYGEOMETRY_GEO2D_HPP
#define PYGEOMETRY_GEO2D_HPP

#include "structure.hpp"

#define DEF_NAMESPACE namespace pyg {
#define END_DEF_NAMESPACE }

//#define DEF_NAMESPACE using namespace pyg
//#define END_DEF_NAMESPACE

DEF_NAMESPACE


#define eps 1e-6
#define sig(x) (((x) > eps) - ((x) < -eps))


// =================================
// 直线与线段部分
// =================================
bool dot_in_line(const Vector2& start, const Vector2& end, const Vector2& point) {
    return sig((end - start).cross(point - end)) == 0;
}



END_DEF_NAMESPACE

#endif //PYGEOMETRY_GEO2D_HPP

