cmake_minimum_required(VERSION 3.1)


project(hw1)

set(hw1_SRC main.cpp CPoint.cpp CDist.cpp At.cpp operators.cpp)
set(hw1_HDR CPoint.h CDist.h At.h operators.h)

#add_library(vector STATIC ${VECTOR_SRC} ${VECTOR_HDR})

add_executable(${PROJECT_NAME} ${hw1_SRC} ${hw1_HDR})


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 /std:c++14")
