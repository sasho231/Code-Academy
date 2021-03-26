#author Zhivko Petrov

cmake_minimum_required(VERSION 3.5.1)

project(listingSources)

#file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*.c)
     
#generate project binary
add_executable(${PROJECT_NAME}
               ${SOURCES})     
               
add_subdirectory(internal_project)
