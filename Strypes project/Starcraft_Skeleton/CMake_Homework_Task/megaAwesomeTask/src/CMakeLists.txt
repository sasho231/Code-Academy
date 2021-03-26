cmake_minimum_required(VERSION 3.5.1)

project(song)

file(GLOB _SOURCES ${CMAKE_CURRENT_SOURCE_DIR}/*c)

add_executable(${PROJECT_NAME}
                ${_SOURCES}
)