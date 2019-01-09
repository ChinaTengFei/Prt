

add_executable(dalvikvm dalvikvm.cc)

target_link_libraries(dalvikvm nativehelper)