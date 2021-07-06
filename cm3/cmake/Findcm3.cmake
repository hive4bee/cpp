set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm3)
find_path(CM_INCLUDE_DIRECTORY my.h, rectangle.h
        PATH_SUFFIXES include
        PATHS ${FIND_CM_PATHS})

find_library(CM_LIBRARY_DIRECTORY
        NAMES libmylib.a, librectangle.a
        PATH_SUFFIXES lib
        PATHS ${FIND_CM_PATHS})