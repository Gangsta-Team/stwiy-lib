cmake_minimum_required(VERSION 3.8)
project("stwiy-lib")

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

file(GLOB stwiyLibSrc
    "*.hpp"
    "*.cpp"
    "*.h"
    "*.c"
    "torque3d/*.*"
    "pure3d/*.*"
    "scripting/*.*"
    "gameobject/*.*"
    "gameobject/spawnobject/*.*"
    "gameobject/render/*.*"
)


add_library(${PROJECT_NAME} STATIC ${stwiyLibSrc})
add_library(lib::stwiyLib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/)