#include <pybind11/pybind11.h>

#include "name.h"

using cpp53::Name;

namespace py = pybind11;
PYBIND11_PLUGIN(py53) {
    py::module m("py53", "pybind11 example plugin");
    py::class_<Name>(m, "Name")
        .def(py::init<const std::string &, bool>())
        .def("getLength", &Name::getLength)
        .def("getLabelCount", &Name::getLabelCount)
        .def("toText", &Name::toText)
        .def("reverse", &Name::reverse)
        .def("concat", &Name::concatenate)
        .def("downcase", &Name::downcase);
    return m.ptr();
}
