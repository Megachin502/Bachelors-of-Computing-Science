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
CMAKE_SOURCE_DIR = "/home/megachin502/Desktop/c++/Assignment 6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assignment_6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment_6.dir/flags.make

CMakeFiles/Assignment_6.dir/ji.cpp.o: CMakeFiles/Assignment_6.dir/flags.make
CMakeFiles/Assignment_6.dir/ji.cpp.o: ../ji.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Assignment_6.dir/ji.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Assignment_6.dir/ji.cpp.o -c "/home/megachin502/Desktop/c++/Assignment 6/ji.cpp"

CMakeFiles/Assignment_6.dir/ji.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Assignment_6.dir/ji.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/megachin502/Desktop/c++/Assignment 6/ji.cpp" > CMakeFiles/Assignment_6.dir/ji.cpp.i

CMakeFiles/Assignment_6.dir/ji.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Assignment_6.dir/ji.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/megachin502/Desktop/c++/Assignment 6/ji.cpp" -o CMakeFiles/Assignment_6.dir/ji.cpp.s

CMakeFiles/Assignment_6.dir/ji.cpp.o.requires:

.PHONY : CMakeFiles/Assignment_6.dir/ji.cpp.o.requires

CMakeFiles/Assignment_6.dir/ji.cpp.o.provides: CMakeFiles/Assignment_6.dir/ji.cpp.o.requires
	$(MAKE) -f CMakeFiles/Assignment_6.dir/build.make CMakeFiles/Assignment_6.dir/ji.cpp.o.provides.build
.PHONY : CMakeFiles/Assignment_6.dir/ji.cpp.o.provides

CMakeFiles/Assignment_6.dir/ji.cpp.o.provides.build: CMakeFiles/Assignment_6.dir/ji.cpp.o


# Object files for target Assignment_6
Assignment_6_OBJECTS = \
"CMakeFiles/Assignment_6.dir/ji.cpp.o"

# External object files for target Assignment_6
Assignment_6_EXTERNAL_OBJECTS =

Assignment_6: CMakeFiles/Assignment_6.dir/ji.cpp.o
Assignment_6: CMakeFiles/Assignment_6.dir/build.make
Assignment_6: CMakeFiles/Assignment_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Assignment_6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment_6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment_6.dir/build: Assignment_6

.PHONY : CMakeFiles/Assignment_6.dir/build

CMakeFiles/Assignment_6.dir/requires: CMakeFiles/Assignment_6.dir/ji.cpp.o.requires

.PHONY : CMakeFiles/Assignment_6.dir/requires

CMakeFiles/Assignment_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment_6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment_6.dir/clean

CMakeFiles/Assignment_6.dir/depend:
	cd "/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/megachin502/Desktop/c++/Assignment 6" "/home/megachin502/Desktop/c++/Assignment 6" "/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug" "/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug" "/home/megachin502/Desktop/c++/Assignment 6/cmake-build-debug/CMakeFiles/Assignment_6.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assignment_6.dir/depend

