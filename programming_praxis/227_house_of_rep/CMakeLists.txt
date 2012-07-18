cmake_minimum_required (VERSION 2.8)
project (house_of_rep)

IF(CMAKE_COMPILER_IS_GNUCXX)
        add_definitions(-std=c++0x)
ENDIF(CMAKE_COMPILER_IS_GNUCXX)

add_executable(house_of_rep main.cpp house_of_rep.cpp data.cpp)
