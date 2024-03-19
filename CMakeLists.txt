cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

project(
    "FirstProjectInCMake"
    VERSION 1.0.0
    DESCRIPTION "Cmake C Project Template for OS2"
    LANGUAGES C
)

set(CMAKE_C_STANDARD 17)

include_directories(include)

file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(${PROJECT_NAME} ${SOURCES})

add_subdirectory(lib/libdyn)
add_subdirectory(lib/libstat)

target_include_directories(${PROJECT_NAME} PUBLIC lib/libdyn/include)
target_include_directories(${PROJECT_NAME} PUBLIC lib/libstat/include)

target_link_libraries(${PROJECT_NAME} StatiCLib DynamiCLib)