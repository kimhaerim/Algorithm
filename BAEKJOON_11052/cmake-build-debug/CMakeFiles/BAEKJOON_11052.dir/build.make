# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/apple/Algorithm/BAEKJOON_11052

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BAEKJOON_11052.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BAEKJOON_11052.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BAEKJOON_11052.dir/flags.make

CMakeFiles/BAEKJOON_11052.dir/main.cpp.o: CMakeFiles/BAEKJOON_11052.dir/flags.make
CMakeFiles/BAEKJOON_11052.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/BAEKJOON_11052.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BAEKJOON_11052.dir/main.cpp.o -c /Users/apple/Algorithm/BAEKJOON_11052/main.cpp

CMakeFiles/BAEKJOON_11052.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BAEKJOON_11052.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/apple/Algorithm/BAEKJOON_11052/main.cpp > CMakeFiles/BAEKJOON_11052.dir/main.cpp.i

CMakeFiles/BAEKJOON_11052.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BAEKJOON_11052.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/apple/Algorithm/BAEKJOON_11052/main.cpp -o CMakeFiles/BAEKJOON_11052.dir/main.cpp.s

# Object files for target BAEKJOON_11052
BAEKJOON_11052_OBJECTS = \
"CMakeFiles/BAEKJOON_11052.dir/main.cpp.o"

# External object files for target BAEKJOON_11052
BAEKJOON_11052_EXTERNAL_OBJECTS =

BAEKJOON_11052: CMakeFiles/BAEKJOON_11052.dir/main.cpp.o
BAEKJOON_11052: CMakeFiles/BAEKJOON_11052.dir/build.make
BAEKJOON_11052: CMakeFiles/BAEKJOON_11052.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable BAEKJOON_11052"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BAEKJOON_11052.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BAEKJOON_11052.dir/build: BAEKJOON_11052

.PHONY : CMakeFiles/BAEKJOON_11052.dir/build

CMakeFiles/BAEKJOON_11052.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BAEKJOON_11052.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BAEKJOON_11052.dir/clean

CMakeFiles/BAEKJOON_11052.dir/depend:
	cd /Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/apple/Algorithm/BAEKJOON_11052 /Users/apple/Algorithm/BAEKJOON_11052 /Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug /Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug /Users/apple/Algorithm/BAEKJOON_11052/cmake-build-debug/CMakeFiles/BAEKJOON_11052.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BAEKJOON_11052.dir/depend

