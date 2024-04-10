# jkit
jkit/
│
├── CMakeLists.txt        # Top-level CMake configuration file
├── include/              # Header files
│   └── tensor1d/
│       └── tensor.hpp    # Declaration of the tensor class
├── src/                  # Source files
│   └── tensor.cpp        # Implementation of the tensor class
├── bindings/             # Python bindings using pybind11
│   └── tensor_bindings.cpp
└── python/               # Python package
    ├── tensor1d/
    │   └── __init__.py
    └── setup.py          # Setup script for installing the Python package
