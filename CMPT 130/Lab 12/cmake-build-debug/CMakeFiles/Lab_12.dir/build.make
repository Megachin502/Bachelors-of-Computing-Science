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
CMAKE_COMMAND = /home/megachin502/Downloads/clion-2016.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/megachin502/Downloads/clion-2016.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/megachin502/Desktop/c++/Lab 12"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_12.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_12.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_12.dir/flags.make

CMakeFiles/Lab_12.dir/pointers.cpp.o: CMakeFiles/Lab_12.dir/flags.make
CMakeFiles/Lab_12.dir/pointers.cpp.o: ../pointers.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_12.dir/pointers.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_12.dir/pointers.cpp.o -c "/home/megachin502/Desktop/c++/Lab 12/pointers.cpp"

CMakeFiles/Lab_12.dir/pointers.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_12.dir/pointers.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/megachin502/Desktop/c++/Lab 12/pointers.cpp" > CMakeFiles/Lab_12.dir/pointers.cpp.i

CMakeFiles/Lab_12.dir/pointers.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_12.dir/pointers.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/megachin502/Desktop/c++/Lab 12/pointers.cpp" -o CMakeFiles/Lab_12.dir/pointers.cpp.s

CMakeFiles/Lab_12.dir/pointers.cpp.o.requires:

.PHONY : CMakeFiles/Lab_12.dir/pointers.cpp.o.requires

CMakeFiles/Lab_12.dir/pointers.cpp.o.provides: CMakeFiles/Lab_12.dir/pointers.cpp.o.requires
	$(MAKE) -f CMakeFiles/Lab_12.dir/build.make CMakeFiles/Lab_12.dir/pointers.cpp.o.provides.build
.PHONY : CMakeFiles/Lab_12.dir/pointers.cpp.o.provides

CMakeFiles/Lab_12.dir/pointers.cpp.o.provides.build: CMakeFiles/Lab_12.dir/pointers.cpp.o


# Object files for target Lab_12
Lab_12_OBJECTS = \
"CMakeFiles/Lab_12.dir/pointers.cpp.o"

# External object files for target Lab_12
Lab_12_EXTERNAL_OBJECTS =

Lab_12: CMakeFiles/Lab_12.dir/pointers.cpp.o
Lab_12: CMakeFiles/Lab_12.dir/build.make
Lab_12: CMakeFiles/Lab_12.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab_12"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_12.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_12.dir/build: Lab_12

.PHONY : CMakeFiles/Lab_12.dir/build

CMakeFiles/Lab_12.dir/requires: CMakeFiles/Lab_12.dir/pointers.cpp.o.requires

.PHONY : CMakeFiles/Lab_12.dir/requires

CMakeFiles/Lab_12.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab_12.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab_12.dir/clean

CMakeFiles/Lab_12.dir/depend:
	cd "/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/megachin502/Desktop/c++/Lab 12" "/home/megachin502/Desktop/c++/Lab 12" "/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug" "/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug" "/home/megachin502/Desktop/c++/Lab 12/cmake-build-debug/CMakeFiles/Lab_12.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_12.dir/depend

