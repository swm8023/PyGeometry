//
// Created by VimerSu on 2016/10/12.
//
#include <boost/python/detail/wrap_python.hpp>
#include <boost/python.hpp>

#include "geometry/g2d/structure.hpp"
#include "geometry/g2d/functions.hpp"

using namespace boost::python;
using namespace pyg;

BOOST_PYTHON_MODULE(pygeometry) {
	class_<Vector2>("vector2", init<optional<float, float>>())
		.def_readwrite("x", &Vector2::x)
		.def_readwrite("y", &Vector2::y)
		.def(self + self)
		.def(self - self)
		.def(self * float())
		.def(self / float())
		.def(self += self)
		.def(self -= self)
		.def(self *= float())
		.def(self /= float())
		.def("length", &Vector2::length)
		.def("length_sqr", &Vector2::lengthSqr)
		.def("dot", &Vector2::dot)
		.def("cross", &Vector2::cross);

    def("dot_in_line", &dot_in_line);


}
// =========== Boost ===========

