cmake_minimum_required(VERSION 3.25 FATAL_ERROR)

    project("DynamiCLib" VERSION 1.0.0 DESCRIPTION "Cmake C Project Template for OS2" LANGUAGES C)

        set(CMAKE_C_STANDARD 17)

            include_directories(include)

                file(GLOB_RECURSE SOURCES "src/*.c")

                    add_library(${PROJECT_NAME} SHARED ${SOURCES})
