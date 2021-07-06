set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm3)
find_path(RECTANGLE_INCLUDE_DIRECTORY rectangle.h
        PATH_SUFFIXES include
        PATHS ${FIND_CM_PATHS})
find_library(RECTANGLE_LIBRARY_DIRECTORY
        NAMES librectangle.a
        PATH_SUFFIXES lib
        PATHS ${FIND_CM_PATHS})