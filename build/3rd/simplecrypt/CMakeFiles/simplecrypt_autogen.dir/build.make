# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/asus/Desktop/Tetris

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/asus/Desktop/Tetris/build

# Utility rule file for simplecrypt_autogen.

# Include the progress variables for this target.
include 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/progress.make

3rd/simplecrypt/CMakeFiles/simplecrypt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target simplecrypt"
	cd /home/asus/Desktop/Tetris/build/3rd/simplecrypt && /usr/bin/cmake -E cmake_autogen /home/asus/Desktop/Tetris/build/3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/AutogenInfo.json Release

simplecrypt_autogen: 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen
simplecrypt_autogen: 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/build.make

.PHONY : simplecrypt_autogen

# Rule to build all files generated by this target.
3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/build: simplecrypt_autogen

.PHONY : 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/build

3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/clean:
	cd /home/asus/Desktop/Tetris/build/3rd/simplecrypt && $(CMAKE_COMMAND) -P CMakeFiles/simplecrypt_autogen.dir/cmake_clean.cmake
.PHONY : 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/clean

3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/depend:
	cd /home/asus/Desktop/Tetris/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asus/Desktop/Tetris /home/asus/Desktop/Tetris/3rd/simplecrypt /home/asus/Desktop/Tetris/build /home/asus/Desktop/Tetris/build/3rd/simplecrypt /home/asus/Desktop/Tetris/build/3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : 3rd/simplecrypt/CMakeFiles/simplecrypt_autogen.dir/depend

