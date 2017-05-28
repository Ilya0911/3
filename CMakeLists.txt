cmake_minimum_required(VERSION 3.6)
project(lab03-master)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp temp.cc test_input.cc)

set(CMAKE_EXE_LINKER_FLAGS -static)

add_executable(test_input.cc temp.cc temp.h)

add_executable(lab03-master ${SOURCE_FILES})

enable_testing()
add_test(NAME test_input COMMAND test_input)
