#include <pybind11/pybind11.h>
#include <pybind11/stl.h>
#include "tensor.hpp" 

namespace py = pybind11;

PYBIND11_MODULE(tensor1d, m) {
    py::class_<tensor1d::Tensor>(m, "Tensor")
        .def(py::init<>())
        .def(py::init<const std::vector<float>&>())
        .def("__add__", &tensor1d::Tensor::operator+)
        .def("__mul__", &tensor1d::Tensor::operator*)
        .def("get_data", [](const tensor1d::Tensor& self) {
            return self.data_;
        }, "Returns the tensor data as a list")
        .def("set_data", [](tensor1d::Tensor& self, const std::vector<float>& data) {
            self.data_ = data;
        }, "Sets the tensor's data from a list");
}
