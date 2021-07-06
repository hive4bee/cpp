cmake_minimum_required(VERSION 3.16)
project (rectangle)
add_library (rectangle src/rectangle.cpp)
target_include_directories(rectangle PUBLIC include)