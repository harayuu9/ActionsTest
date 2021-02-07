cmake_minimum_required(VERSION 3.16)

project(main)
set(CMAKE_CXX_STANDARD $ENV{CPP_VERSION})
set(CMAKE_CXX_FLAGS_DEBUG "-Wall -WX -O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -WX -O2 -DNDEBUG")
add_executable(main main.cpp)

install(TARGETS main)

enable_testing()
add_test(NAME main COMMAND main)
