
include_directories(../libnativehelper/include)
include_directories(../libnativehelper/include_jni)
include_directories(../libnativehelper/header_only_include)
aux_source_directory(. DIR_HELLO_SRCS)

add_library(nativehelper ${DIR_HELLO_SRCS})