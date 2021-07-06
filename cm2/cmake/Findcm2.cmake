set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm2)
find_path(INCLUDE_CM_DIRECTORY
        PATH_SUFFIXES include
        HINTS ${FIND_CM_PATHS}
        NO_CACHE)
find_library(SSSSSSSSSSSSSSs
        NAMES librectangle.a
        PATH_SUFFIXES lib
        HINTS /home/seongjin/workspace/c++/cm2)

find_library(LIBRARY_CM_DIRECTORY
        NAMES libmylib
        PATH_SUFFIXES lib
        PATHS ${FIND_CM_PATHS}
        NO_CACHE)
