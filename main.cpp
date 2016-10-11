#include <iostream>
#include <boost/python.hpp>
#include <Python.h>


// =========== Boost ===========
class TestBoost{
public:
    int Add(int x, int y) { return x + y; }
};

using namespace boost::python;

BOOST_PYTHON_MODULE(pygeometry) {
    class_<TestBoost>("TestBoost")
            .def("add", &TestBoost::Add);
}
// =========== Boost ===========
