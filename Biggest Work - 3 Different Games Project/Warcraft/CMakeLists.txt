cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

project(warcraft)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Defines.h
        ${INC_DIR}/Hero.h
        ${INC_DIR}/ArchmageHero.h
        ${INC_DIR}/DeathKnightHero.h
        ${INC_DIR}/DrawRangerHero.h
        
        ${SRC_DIR}/main.c
        ${SRC_DIR}/Hero.c
        ${SRC_DIR}/ArchmageHero.c
        ${SRC_DIR}/DeathKnightHero.c
        ${SRC_DIR}/DrawRangerHero.c
)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  

set_target_c_standard(${PROJECT_NAME} 11)
enable_target_c_warnings(${PROJECT_NAME})
