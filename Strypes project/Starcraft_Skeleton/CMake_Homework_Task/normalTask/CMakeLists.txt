cmake_minimum_required(VERSION 3.5.1)

project(hello_world)

add_executable(${PROJECT_NAME}
                ${CMAKE_CURRENT_SOURCE_DIR}/main.c
                ${CMAKE_CURRENT_SOURCE_DIR}/hello.c
                )

