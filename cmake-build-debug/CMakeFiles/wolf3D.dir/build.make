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
include CMakeFiles/wolf3D.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/wolf3D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/wolf3D.dir/flags.make

CMakeFiles/wolf3D.dir/main.c.o: CMakeFiles/wolf3D.dir/flags.make
CMakeFiles/wolf3D.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/wolf3D.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/wolf3D.dir/main.c.o   -c /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c

CMakeFiles/wolf3D.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/wolf3D.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c > CMakeFiles/wolf3D.dir/main.c.i

CMakeFiles/wolf3D.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/wolf3D.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/main.c -o CMakeFiles/wolf3D.dir/main.c.s

CMakeFiles/wolf3D.dir/main.c.o.requires:

.PHONY : CMakeFiles/wolf3D.dir/main.c.o.requires

CMakeFiles/wolf3D.dir/main.c.o.provides: CMakeFiles/wolf3D.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/wolf3D.dir/build.make CMakeFiles/wolf3D.dir/main.c.o.provides.build
.PHONY : CMakeFiles/wolf3D.dir/main.c.o.provides

CMakeFiles/wolf3D.dir/main.c.o.provides.build: CMakeFiles/wolf3D.dir/main.c.o


CMakeFiles/wolf3D.dir/display.c.o: CMakeFiles/wolf3D.dir/flags.make
CMakeFiles/wolf3D.dir/display.c.o: ../display.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/wolf3D.dir/display.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/wolf3D.dir/display.c.o   -c /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c

CMakeFiles/wolf3D.dir/display.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/wolf3D.dir/display.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c > CMakeFiles/wolf3D.dir/display.c.i

CMakeFiles/wolf3D.dir/display.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/wolf3D.dir/display.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/display.c -o CMakeFiles/wolf3D.dir/display.c.s

CMakeFiles/wolf3D.dir/display.c.o.requires:

.PHONY : CMakeFiles/wolf3D.dir/display.c.o.requires

CMakeFiles/wolf3D.dir/display.c.o.provides: CMakeFiles/wolf3D.dir/display.c.o.requires
	$(MAKE) -f CMakeFiles/wolf3D.dir/build.make CMakeFiles/wolf3D.dir/display.c.o.provides.build
.PHONY : CMakeFiles/wolf3D.dir/display.c.o.provides

CMakeFiles/wolf3D.dir/display.c.o.provides.build: CMakeFiles/wolf3D.dir/display.c.o


# Object files for target wolf3D
wolf3D_OBJECTS = \
"CMakeFiles/wolf3D.dir/main.c.o" \
"CMakeFiles/wolf3D.dir/display.c.o"

# External object files for target wolf3D
wolf3D_EXTERNAL_OBJECTS =

wolf3D: CMakeFiles/wolf3D.dir/main.c.o
wolf3D: CMakeFiles/wolf3D.dir/display.c.o
wolf3D: CMakeFiles/wolf3D.dir/build.make
wolf3D: CMakeFiles/wolf3D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable wolf3D"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/wolf3D.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/wolf3D.dir/build: wolf3D

.PHONY : CMakeFiles/wolf3D.dir/build

CMakeFiles/wolf3D.dir/requires: CMakeFiles/wolf3D.dir/main.c.o.requires
CMakeFiles/wolf3D.dir/requires: CMakeFiles/wolf3D.dir/display.c.o.requires

.PHONY : CMakeFiles/wolf3D.dir/requires

CMakeFiles/wolf3D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/wolf3D.dir/cmake_clean.cmake
.PHONY : CMakeFiles/wolf3D.dir/clean

CMakeFiles/wolf3D.dir/depend:
	cd /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42 /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42 /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug /nfs/2016/d/dpanov/ClionProjects/ClionProjects/wolf3d-c-42/cmake-build-debug/CMakeFiles/wolf3D.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/wolf3D.dir/depend

