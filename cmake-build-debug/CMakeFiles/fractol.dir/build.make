# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fractol.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fractol.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fractol.dir/flags.make

CMakeFiles/fractol.dir/main.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fractol.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/main.c.o   -c /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c

CMakeFiles/fractol.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c > CMakeFiles/fractol.dir/main.c.i

CMakeFiles/fractol.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c -o CMakeFiles/fractol.dir/main.c.s

CMakeFiles/fractol.dir/main.c.o.requires:

.PHONY : CMakeFiles/fractol.dir/main.c.o.requires

CMakeFiles/fractol.dir/main.c.o.provides: CMakeFiles/fractol.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/fractol.dir/build.make CMakeFiles/fractol.dir/main.c.o.provides.build
.PHONY : CMakeFiles/fractol.dir/main.c.o.provides

CMakeFiles/fractol.dir/main.c.o.provides.build: CMakeFiles/fractol.dir/main.c.o


CMakeFiles/fractol.dir/display.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/display.c.o: ../display.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/fractol.dir/display.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/display.c.o   -c /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c

CMakeFiles/fractol.dir/display.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/display.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c > CMakeFiles/fractol.dir/display.c.i

CMakeFiles/fractol.dir/display.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/display.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c -o CMakeFiles/fractol.dir/display.c.s

CMakeFiles/fractol.dir/display.c.o.requires:

.PHONY : CMakeFiles/fractol.dir/display.c.o.requires

CMakeFiles/fractol.dir/display.c.o.provides: CMakeFiles/fractol.dir/display.c.o.requires
	$(MAKE) -f CMakeFiles/fractol.dir/build.make CMakeFiles/fractol.dir/display.c.o.provides.build
.PHONY : CMakeFiles/fractol.dir/display.c.o.provides

CMakeFiles/fractol.dir/display.c.o.provides.build: CMakeFiles/fractol.dir/display.c.o


CMakeFiles/fractol.dir/mlx.c.o: CMakeFiles/fractol.dir/flags.make
CMakeFiles/fractol.dir/mlx.c.o: ../mlx.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/fractol.dir/mlx.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fractol.dir/mlx.c.o   -c /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/mlx.c

CMakeFiles/fractol.dir/mlx.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fractol.dir/mlx.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/mlx.c > CMakeFiles/fractol.dir/mlx.c.i

CMakeFiles/fractol.dir/mlx.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fractol.dir/mlx.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/mlx.c -o CMakeFiles/fractol.dir/mlx.c.s

CMakeFiles/fractol.dir/mlx.c.o.requires:

.PHONY : CMakeFiles/fractol.dir/mlx.c.o.requires

CMakeFiles/fractol.dir/mlx.c.o.provides: CMakeFiles/fractol.dir/mlx.c.o.requires
	$(MAKE) -f CMakeFiles/fractol.dir/build.make CMakeFiles/fractol.dir/mlx.c.o.provides.build
.PHONY : CMakeFiles/fractol.dir/mlx.c.o.provides

CMakeFiles/fractol.dir/mlx.c.o.provides.build: CMakeFiles/fractol.dir/mlx.c.o


# Object files for target fractol
fractol_OBJECTS = \
"CMakeFiles/fractol.dir/main.c.o" \
"CMakeFiles/fractol.dir/display.c.o" \
"CMakeFiles/fractol.dir/mlx.c.o"

# External object files for target fractol
fractol_EXTERNAL_OBJECTS =

fractol: CMakeFiles/fractol.dir/main.c.o
fractol: CMakeFiles/fractol.dir/display.c.o
fractol: CMakeFiles/fractol.dir/mlx.c.o
fractol: CMakeFiles/fractol.dir/build.make
fractol: CMakeFiles/fractol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable fractol"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fractol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fractol.dir/build: fractol

.PHONY : CMakeFiles/fractol.dir/build

CMakeFiles/fractol.dir/requires: CMakeFiles/fractol.dir/main.c.o.requires
CMakeFiles/fractol.dir/requires: CMakeFiles/fractol.dir/display.c.o.requires
CMakeFiles/fractol.dir/requires: CMakeFiles/fractol.dir/mlx.c.o.requires

.PHONY : CMakeFiles/fractol.dir/requires

CMakeFiles/fractol.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fractol.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fractol.dir/clean

CMakeFiles/fractol.dir/depend:
	cd /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42 /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42 /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles/fractol.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fractol.dir/depend
