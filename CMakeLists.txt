cmake_minimum_required(VERSION 3.6)
project(wolf)
#set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")
set(SOURCE_FILES
        main.c
        display.c
        mlx.c
        event.c
        map_load.c
        wolf_g.c
        libft.a
        leak_detector_c.c
        )
add_executable(wolf ${SOURCE_FILES})

target_link_libraries (wolf
        ${CMAKE_SOURCE_DIR}/libft.a
        "-lmlx"
        "-framework OpenGL"
        "-framework AppKit"
        )