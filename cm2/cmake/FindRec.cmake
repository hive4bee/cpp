set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm2)
#find_path(INCLUDE_CM_DIRECTORY
#        PATH_SUFFIXES include
#        PATHS ${FIND_CM_PATHS})
find_library(RECTANGLE_SS
        NAMES librectangle.a
        PATH_SUFFIXED lib
        PATHS ${FIND_CM_PATHS})