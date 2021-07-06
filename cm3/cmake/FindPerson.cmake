set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm3)
find_path(PERSON_INCLUDE_DIRECTORY my.h
        PATH_SUFFIXES include
        PATHS ${FIND_CM_PATHS})

find_library(PERSON_LIBRARY_DIRECTORY
        NAMES libmylib.a
        PATH_SUFFIXES lib
        PATHS ${FIND_CM_PATHS})