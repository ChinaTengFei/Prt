CMAKE_MINIMUM_REQUIRED (VERSION 3.13)

PROJECT (prt)




include_directories(../libnativehelper/include)
include_directories(../libnativehelper/include_jni)
include_directories(../libnativehelper/header_only_include)

set(CMAKE_C_COMPILER "/Volumes/work/gcc-arm-none-eabi-8-2018-q4-major/bin/arm-none-eabi-gcc")

set(CMAKE_CXX_COMPILER "/Volumes/work/gcc-arm-none-eabi-8-2018-q4-major/bin/arm-none-eabi-c++")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 --specs=nosys.specs")

add_subdirectory(dalvikvm)

add_subdirectory(libnativehelper)

