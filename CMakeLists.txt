cmake_minimum_required(VERSION 2.6)

project(SymbolicMatMul)

SET(EXTRA_CXX_COMPILE_FLAGS "-std=c++11 -I./src -I./test -I./benchmarks -I/opt/local/include -O2 -Werror -Wall -fPIC")
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} ${EXTRA_CXX_COMPILE_FLAGS}")

INCLUDE_DIRECTORIES(./src/)

SET(CPP_FILES ./src/matrix.cpp)

add_library(symmul ${CPP_FILES})
target_link_libraries(symmul ${llvm_libs} z3)

# Test executables
SET(ALL_TEST_FILES ./test/matrix.cpp)

add_executable(all-tests ${ALL_TEST_FILES})
target_link_libraries(all-tests symmul)
