cmake_minimum_required(VERSION 3.16)
#project(c__)
#project(carrot)
#project(04)
#project(05)
#project(06)
#project(07)
#project(08)
#project(09)
#project(10)
#project(11)
#project(12)

set(CMAKE_CXX_STANDARD 14)
#include_directories(11/operatorOverloading)


#add_executable(c__  imsi/imsi.cpp)#02/myFirst.cpp
#add_executable(carrot 02/convert.cpp)
#add_executable(04 04/pointArrCal/mixtypes.cpp)
#add_executable(05 05/loopText/textin4.cpp)
#add_executable(06 06/file/sumafile.cpp)
#add_executable(07 07/funPtr/arfupt.cpp)
#add_executable(08 08/funTemplate/choices.cpp)
#add_executable(09 09/namespace/usenmsp.cpp)
#add_executable(10 10/basicClass/usestock0.cpp)
#
#set(example 11/operatorOverloading/mytime0.cpp 11/operatorOverloading/usetime0.cpp)
#set(overloading2 11/operatorOverloading/mytime1.cpp 11/operatorOverloading/usetime1.cpp)
#set(operatorOverloading3 11/operatorOverloading/mytime2.cpp 11/operatorOverloading/usetime2.cpp)
#set(friend 11/friend/mytime3.cpp 11/friend/usetime3.cpp)
#set(overloadingVector 11/overloadingVector/vect.cpp 11/overloadingVector/randwalk.cpp)
#set(changeClass 11/changeClass/stone.cpp 11/changeClass/stonewt.cpp)
#set(changeClass1 11/changeClass/stone1.cpp 11/changeClass/stonewt1.cpp)
#
#add_executable(11 ${changeClass1})
#
#set(dynamic 12/dynamic/stringbad.cpp 12/dynamic/vegnews.cpp)
#set(nString 12/nString/string1.cpp 12/nString/sayings1.cpp)
#set(nString2 12/nString/string1.cpp 12/nString/sayings2.cpp)
#set(ptrobj 12/ptrobj/placenew2.cpp)
#set(queue 12/queue/queue.cpp 12/queue/bank.cpp)
#add_executable(12 ${queue})
#
#set(basicClass 13/basicClass/tabtenn0.cpp 13/basicClass/usett0.cpp)
#set(basicClass2 13/basicClass2/tabtenn1.cpp 13/basicClass2/usett1.cpp)
#set(polymorhphic 13/polymorhphic/brass.cpp 13/polymorhphic/usebrass2.cpp)
#add_executable(13 ${polymorhphic})
#
#
#
#
#project(cm2)
#list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cm2/cmake")#CMakeLists.txt가 포함된 디렉토리
#add_executable(cm2 cm2/main.cpp)
#include(FindPkgConfig)
#include_directories(${INCLUDE_CM_DIRECTORY})
#find_package(Rec)
#find_package(cm2)
#find_library(RECTANGLE_LIB
#        NAMES librectangle
#        PATHS /home/seongjin/workspace/c++/cm2/lib/librectangle)
#message(INCLUDE_CM_DIRECTORY: ${INCLUDE_CM_DIRECTORY})
#message(${LIBRARY_CM_DIRECTORY})
#message(/////////////////${RECTANGLE_LIB})
#message(sssss${SSSSSSSSSSSSSSs})
#target_link_libraries(cm2 ${LIBRARY_CM_DIRECTORY} ${RECTANGLE_LIB})
#
#
#
#
#project(cm3)
##list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cm3/cmake")
#
#add_executable(cm3 cm3/main.cpp)
#add_library(app cm3/libs/Station.cpp)
##link_libraries(cm3 app)
#include_directories(cm3/includes)
#
#target_link_libraries(cm3 ${LIBRARY_CM_DIRECTORY} ${RECTANGLE_LIB} app)

project(cmakeProject)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cm2/cmake")
add_executable(cmakeProject cm3/main.cpp)
include_directories(cm3/include cm3/includes)
#################################################
set(FIND_CM_PATHS
        /home/seongjin/workspace/c++/cm2)
find_library(RECTANGLE_LIB
        NAMES librectangle.a
        PATH_SUFFIXES lib
        HINTS ${FIND_CM_PATHS})
find_library(LIBRARY_CM_DIRECTORY
        NAMES libmylib.a
        PATH_SUFFIXES lib
        HINTS ${FIND_CM_PATHS})
#################################################
add_library(app cm3/libs/Station.cpp)
target_link_libraries(cmakeProject ${LIBRARY_CM_DIRECTORY} ${RECTANGLE_LIB} app)




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

project(containment)
add_executable(containment 14/containment/use_stuc.cpp)
include_directories(14/containment/include)
add_library(studentc 14/containment/lib/studentc.cpp)
target_link_libraries(containment studentc)

project(multiInheritance)
add_executable(multiInheritance 14/multiInheritance/worktest.cpp)
include_directories(14/multiInheritance/include)
add_library(worker0 14/multiInheritance/lib/worker0.cpp)
target_link_libraries(multiInheritance worker0)

project(multiInheritance2)
add_executable(multiInheritance2 14/multiInheritance/workmi.cpp)
include_directories(14/multiInheritance/include 14/containment/include)
add_library(workermi 14/multiInheritance/lib/workermi.cpp)
target_link_libraries(multiInheritance2 workermi)

project(classTemplate)
include_directories(14/classTemplate/include)
add_executable(classTemplate 14/classTemplate/stacktem.cpp)
project(classTemplate2)
add_executable(classTemplate2 14/classTemplate/stkoptr1.cpp)
add_executable(classTemplate3 14/classTemplate/twod.cpp)
add_executable(classTemplate4 14/classTemplate/pairs.cpp)
add_executable(classTemplate5 14/classTemplate/tempmemb.cpp)
add_executable(classTemplate6 14/classTemplate/tempparm.cpp)

project(classTemplate7)
add_executable(classTemplate7 14/classTemplate/frnd2tmp.cpp)

project(friendTv)
add_executable(friendTv 15/friendTv/use_tv.cpp)
include_directories(15/friendTv/include)
add_library(friendTvLib 15/friendTv/lib/tv.cpp)
target_link_libraries(friendTv friendTvLib)

project(nested)
include_directories(15/nested/include)
add_executable(nested 15/nested/nested.cpp)

project(exception)
add_executable(exception 15/exception/error1.cpp)
add_executable(exception2 15/exception/error2.cpp)
add_executable(exception3 15/exception/error3.cpp)


include_directories(15/exception/include)
add_executable(exception4 15/exception/error4.cpp)
add_executable(exception5 15/exception/error5.cpp)

add_executable(newexcp 15/exception/newexcp.cpp)

add_executable(useSales 15/exception/use_sales.cpp)
add_library(sales 15/exception/lib/sales.cpp)
target_link_libraries(useSales sales)

add_executable(constcast 15/cast/constcast.cpp)

project(16)
add_executable(str1 16/string/str1.cpp)
add_executable(example 16/string/get_getline_cin.cpp)
add_executable(example2 16/string/get_getline_cin2.cpp)
add_executable(example3 16/string/get_getline_cin3.cpp)
add_executable(strfile 16/string/strfile.cpp)

add_executable(smrtptrs 16/smartPointer/smrtptrs.cpp)
add_executable(fowl 16/smartPointer/fowl.cpp)

add_executable(vect1 16/stl/vect1.cpp)
add_executable(vect2 16/stl/vect2.cpp)
add_executable(vect3 16/stl/vect3.cpp)

add_executable(copyit 16/collection/copyit.cpp)
add_executable(inserts 16/collection/inserts.cpp)
add_executable(list 16/collection/list.cpp)
add_executable(set 16/collection/setops.cpp)
add_executable(multimap 16/collection/multimap.cpp)

add_executable(functor 16/functor/functor.cpp)
add_executable(funadap 16/functor/funadap.cpp)

add_executable(strgst1 16/algorithm/strgst1.cpp)
add_executable(listrmv 16/algorithm/listrmv.cpp)
add_executable(usealgo 16/algorithm/usealgo.cpp)

add_executable(valvect 16/etc/valvect.cpp)
add_executable(vslice 16/etc/vslice.cpp)
add_executable(ilist 16/etc/ilist.cpp)

add_executable(write 17/print/write.cpp)
add_executable(default 17/print/default.cpp)
add_executable(manip 17/print/manip.cpp)
add_executable(width 17/print/width.cpp)
add_executable(fill 17/print/fill.cpp)
add_executable(precise 17/print/precise.cpp)
add_executable(showpt 17/print/showpt.cpp)
add_executable(setf 17/print/setf.cpp)
add_executable(setf2 17/print/setf2.cpp)

add_executable(check_it 17/input/check_it.cpp)
add_executable(cin_exception 17/input/cin_exception.cpp)

add_executable(getFun 17/input/get_fun.cpp)
add_executable(peeker 17/input/peeker.cpp)
add_executable(truncate 17/input/truncate.cpp)

add_executable(fileio 17/file/fileio.cpp)
add_executable(strout 17/file/strout.cpp)
add_executable(strin 17/file/strin.cpp)