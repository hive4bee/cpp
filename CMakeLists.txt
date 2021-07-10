cmake_minimum_required(VERSION 3.16)
project(c__)
project(carrot)
project(04)
project(05)
project(06)
project(07)
project(08)
project(09)
project(10)
project(11)
project(12)

set(CMAKE_CXX_STANDARD 14)
#include_directories(11/operatorOverloading)


add_executable(c__  imsi/imsi.cpp)#02/myFirst.cpp
add_executable(carrot 02/convert.cpp)
add_executable(04 04/pointArrCal/mixtypes.cpp)
add_executable(05 05/loopText/textin4.cpp)
add_executable(06 06/file/sumafile.cpp)
add_executable(07 07/funPtr/arfupt.cpp)
add_executable(08 08/funTemplate/choices.cpp)
add_executable(09 09/namespace/usenmsp.cpp)
add_executable(10 10/basicClass/usestock0.cpp)

set(example 11/operatorOverloading/mytime0.cpp 11/operatorOverloading/usetime0.cpp)
set(overloading2 11/operatorOverloading/mytime1.cpp 11/operatorOverloading/usetime1.cpp)
set(operatorOverloading3 11/operatorOverloading/mytime2.cpp 11/operatorOverloading/usetime2.cpp)
set(friend 11/friend/mytime3.cpp 11/friend/usetime3.cpp)
set(overloadingVector 11/overloadingVector/vect.cpp 11/overloadingVector/randwalk.cpp)
set(changeClass 11/changeClass/stone.cpp 11/changeClass/stonewt.cpp)
set(changeClass1 11/changeClass/stone1.cpp 11/changeClass/stonewt1.cpp)

add_executable(11 ${changeClass1})

set(dynamic 12/dynamic/stringbad.cpp 12/dynamic/vegnews.cpp)
set(nString 12/nString/string1.cpp 12/nString/sayings1.cpp)
set(nString2 12/nString/string1.cpp 12/nString/sayings2.cpp)
set(ptrobj 12/ptrobj/placenew2.cpp)
set(queue 12/queue/queue.cpp 12/queue/bank.cpp)
add_executable(12 ${queue})

set(basicClass 13/basicClass/tabtenn0.cpp 13/basicClass/usett0.cpp)
set(basicClass2 13/basicClass2/tabtenn1.cpp 13/basicClass2/usett1.cpp)
set(polymorhphic 13/polymorhphic/brass.cpp 13/polymorhphic/usebrass2.cpp)
add_executable(13 ${polymorhphic})




project(cm2)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cm2/cmake")#CMakeLists.txt가 포함된 디렉토리

add_executable(cm2 cm2/main.cpp)

include(FindPkgConfig)
include_directories(${INCLUDE_CM_DIRECTORY})
find_package(Rec)
find_package(cm2)
find_library(RECTANGLE_LIB
        NAMES librectangle
        PATHS /home/seongjin/workspace/c++/cm2/lib/librectangle)
message(INCLUDE_CM_DIRECTORY: ${INCLUDE_CM_DIRECTORY})
message(${LIBRARY_CM_DIRECTORY})
message(/////////////////${RECTANGLE_LIB})
message(sssss${SSSSSSSSSSSSSSs})
target_link_libraries(cm2 ${LIBRARY_CM_DIRECTORY} ${RECTANGLE_LIB})




project(cm3)
#list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cm3/cmake")

add_executable(cm3 cm3/main.cpp)
add_library(app cm3/libs/Station.cpp)
#link_libraries(cm3 app)
include_directories(cm3/includes)

target_link_libraries(cm3 ${LIBRARY_CM_DIRECTORY} ${RECTANGLE_LIB} app)

project(abstract)
add_executable(abstract 13/abstract/usebrass3.cpp)
add_library(acctabc 13/abstract/lib/acctabc.cpp)
include_directories(13/abstract/include)
target_link_libraries(abstract acctabc)

project(dynamicInheritance)
add_executable(dynamicInheritance 13/dynamicInheritance/usedma.cpp)
add_library(dma 13/dynamicInheritance/lib/dma.cpp)
include_directories(13/dynamicInheritance/include)
target_link_libraries(dynamicInheritance dma)