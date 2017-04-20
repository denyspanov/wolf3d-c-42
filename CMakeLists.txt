cmake_minimum_required(VERSION 3.6)
project(wolf)
#set(CMAKE_C_FLAGS "-Wall -Werror -Wextra")
set(SOURCE_FILES
        main.c
        display.c
        mlx.c
        )
add_executable(wolf ${SOURCE_FILES})
target_link_libraries(wolf
       -lmlx
       "-L/usr/lib64/X11"
       -lm
       -lX11
       -lXext
       "-L/usr/lib64/"
       )
