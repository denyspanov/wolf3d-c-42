cmake_minimum_required(VERSION 3.7)
project(wolf3D)

set(SOURCE_FILES main.c wolf.h display.c)
set (CMAKE_SHARED_LINKER_FLAGS "-lmlx" "-lXext" "-lX11" "-lm")
add_executable(wolf3D ${SOURCE_FILES})
set(CMAKE_C_FLAGS )