# C++ Googletest Framework + CMake
A simple example of Google Test Framework and CMake usage.

### Installation

You don't have to install googletest's libs, the CMake will automatically install for you. You just need to clone this repository and do the following commands:

Clone the repository:

`$ git clone https://github.com/leozz37/gtest-and-cmake-example.git`

Go to the repository:

`$ cd gtest-and-cmake-example`

Create a build directory:

`$ mkdir build && cd build`

Build the program:

`$ cmake ..`

`$ make`


### Running the tests

You can either run the `ctest` command inside the build directory or run the test binary:

`./test/unit_tests`
