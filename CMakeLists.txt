cmake_minimum_required(VERSION 3.7)
project(wolf3D)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c wolf.h display.c mlx.c)
add_executable(wolf3D ${SOURCE_FILES})