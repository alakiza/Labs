cmake_minimum_required(VERSION 2.8)

project(lab2_3)
#set( project_sources
#main.cpp
#conditioner.cpp
#)
file(GLOB HEADERS *.hpp *.h)
file(GLOB SOURCES *.cpp)
#add_library(lab2_3 SHARED ${HEADERS} ${SOURCES})
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
