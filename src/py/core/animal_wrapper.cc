#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

#include "src/cpp/duck.h"

namespace py = pybind11;
using namespace pybind11::literals;

class PyAnimal : public Animal {
 public:
  /* Inherit the constructors */
  using Animal::Animal;

  bool bark() override {
    PYBIND11_OVERRIDE_PURE(bool,   /* Return type */
                           Animal, /* Parent class */
                           bark    /* Name of function in C++ (must match Python name) */
    );
  }
};

PYBIND11_MODULE(animal, m) {
  m.doc() = "Animal module";
  py::class_<Animal, PyAnimal>(m, "Animal").def(py::init<>()).def("bark", &Animal::bark);
  py::class_<Duck, Animal>(m, "Duck").def(py::init<>()).def("bark", &Duck::bark);
}
