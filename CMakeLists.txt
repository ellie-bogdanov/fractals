cmake_minimum_required(VERSION 3.0.0)
project(fractals VERSION 0.1.0 LANGUAGES C CXX)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable(${PROJECT_NAME} main.cpp fractal_tree.cpp fractal_tree.hpp mandelbrot_set.hpp mandelbrot_set.cpp complementary_set.hpp complementary_set.cpp)

target_link_libraries( ${PROJECT_NAME} ${OpenCV_LIBS} )

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
