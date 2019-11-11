cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

project(lab2)
set( project_sources
main.cpp
vector.cpp
matrix.cpp
)
add_executable(${PROJECT_NAME} ${project_sources})
