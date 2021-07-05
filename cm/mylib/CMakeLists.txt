cmake_minimum_required(VERSION 3.16)
project (mylib)
add_library (mylib src/my.cpp)
target_include_directories(mylib PUBLIC include)