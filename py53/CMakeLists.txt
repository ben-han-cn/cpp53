include_directories(../include)
include_directories(.)

set(CMAKE_CXX_FLAGS "-std=c++11 -fPIC -I /usr/local/include/python3.5m")
set(CMAKE_CXX_LDFLAGS "-L/usr/local/lib -lpython3.5m ")

#find_package(pybind11 REQUIRED)
add_library(py53 MODULE py53.cpp)
target_link_libraries(py53 cpp53)

