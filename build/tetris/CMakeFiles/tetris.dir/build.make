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

# Include any dependencies generated for this target.
include tetris/CMakeFiles/tetris.dir/depend.make

# Include the progress variables for this target.
include tetris/CMakeFiles/tetris.dir/progress.make

# Include the compile flags for this target's objects.
include tetris/CMakeFiles/tetris.dir/flags.make

tetris/qrc_res.o:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating qrc_res.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/lib/qt5/bin/rcc --name res --pass 2 --temp /home/asus/Desktop/Tetris/build/tetris/CMakeFiles/rcc_object_res.dir/qrc_restmp.cpp.o --output /home/asus/Desktop/Tetris/build/tetris/qrc_res.o /home/asus/Desktop/Tetris/tetris/res.qrc

tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o: tetris/tetris_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o -c /home/asus/Desktop/Tetris/build/tetris/tetris_autogen/mocs_compilation.cpp

tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/build/tetris/tetris_autogen/mocs_compilation.cpp > CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.i

tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/build/tetris/tetris_autogen/mocs_compilation.cpp -o CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.s

tetris/CMakeFiles/tetris.dir/game.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/game.cpp.o: ../tetris/game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tetris/CMakeFiles/tetris.dir/game.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/game.cpp.o -c /home/asus/Desktop/Tetris/tetris/game.cpp

tetris/CMakeFiles/tetris.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/game.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/game.cpp > CMakeFiles/tetris.dir/game.cpp.i

tetris/CMakeFiles/tetris.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/game.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/game.cpp -o CMakeFiles/tetris.dir/game.cpp.s

tetris/CMakeFiles/tetris.dir/gamewindow.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/gamewindow.cpp.o: ../tetris/gamewindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tetris/CMakeFiles/tetris.dir/gamewindow.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/gamewindow.cpp.o -c /home/asus/Desktop/Tetris/tetris/gamewindow.cpp

tetris/CMakeFiles/tetris.dir/gamewindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/gamewindow.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/gamewindow.cpp > CMakeFiles/tetris.dir/gamewindow.cpp.i

tetris/CMakeFiles/tetris.dir/gamewindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/gamewindow.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/gamewindow.cpp -o CMakeFiles/tetris.dir/gamewindow.cpp.s

tetris/CMakeFiles/tetris.dir/global.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/global.cpp.o: ../tetris/global.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tetris/CMakeFiles/tetris.dir/global.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/global.cpp.o -c /home/asus/Desktop/Tetris/tetris/global.cpp

tetris/CMakeFiles/tetris.dir/global.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/global.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/global.cpp > CMakeFiles/tetris.dir/global.cpp.i

tetris/CMakeFiles/tetris.dir/global.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/global.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/global.cpp -o CMakeFiles/tetris.dir/global.cpp.s

tetris/CMakeFiles/tetris.dir/helpwindow.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/helpwindow.cpp.o: ../tetris/helpwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tetris/CMakeFiles/tetris.dir/helpwindow.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/helpwindow.cpp.o -c /home/asus/Desktop/Tetris/tetris/helpwindow.cpp

tetris/CMakeFiles/tetris.dir/helpwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/helpwindow.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/helpwindow.cpp > CMakeFiles/tetris.dir/helpwindow.cpp.i

tetris/CMakeFiles/tetris.dir/helpwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/helpwindow.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/helpwindow.cpp -o CMakeFiles/tetris.dir/helpwindow.cpp.s

tetris/CMakeFiles/tetris.dir/main.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/main.cpp.o: ../tetris/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tetris/CMakeFiles/tetris.dir/main.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/main.cpp.o -c /home/asus/Desktop/Tetris/tetris/main.cpp

tetris/CMakeFiles/tetris.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/main.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/main.cpp > CMakeFiles/tetris.dir/main.cpp.i

tetris/CMakeFiles/tetris.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/main.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/main.cpp -o CMakeFiles/tetris.dir/main.cpp.s

tetris/CMakeFiles/tetris.dir/mainwindow.cpp.o: tetris/CMakeFiles/tetris.dir/flags.make
tetris/CMakeFiles/tetris.dir/mainwindow.cpp.o: ../tetris/mainwindow.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tetris/CMakeFiles/tetris.dir/mainwindow.cpp.o"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/mainwindow.cpp.o -c /home/asus/Desktop/Tetris/tetris/mainwindow.cpp

tetris/CMakeFiles/tetris.dir/mainwindow.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/mainwindow.cpp.i"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/asus/Desktop/Tetris/tetris/mainwindow.cpp > CMakeFiles/tetris.dir/mainwindow.cpp.i

tetris/CMakeFiles/tetris.dir/mainwindow.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/mainwindow.cpp.s"
	cd /home/asus/Desktop/Tetris/build/tetris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/asus/Desktop/Tetris/tetris/mainwindow.cpp -o CMakeFiles/tetris.dir/mainwindow.cpp.s

# Object files for target tetris
tetris_OBJECTS = \
"CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/tetris.dir/game.cpp.o" \
"CMakeFiles/tetris.dir/gamewindow.cpp.o" \
"CMakeFiles/tetris.dir/global.cpp.o" \
"CMakeFiles/tetris.dir/helpwindow.cpp.o" \
"CMakeFiles/tetris.dir/main.cpp.o" \
"CMakeFiles/tetris.dir/mainwindow.cpp.o"

# External object files for target tetris
tetris_EXTERNAL_OBJECTS = \
"/home/asus/Desktop/Tetris/build/tetris/qrc_res.o"

tetris/tetris: tetris/CMakeFiles/tetris.dir/tetris_autogen/mocs_compilation.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/game.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/gamewindow.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/global.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/helpwindow.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/main.cpp.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/mainwindow.cpp.o
tetris/tetris: tetris/qrc_res.o
tetris/tetris: tetris/CMakeFiles/tetris.dir/build.make
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.12.8
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Multimedia.so.5.12.8
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Xml.so.5.12.8
tetris/tetris: 3rd/kcp/libkcp.a
tetris/tetris: 3rd/qslog/libqslog.a
tetris/tetris: 3rd/protobuf/libprotobuf.a
tetris/tetris: 3rd/simplecrypt/libsimplecrypt.a
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.12.8
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.12.8
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
tetris/tetris: /usr/local/protobuf/lib/libprotobuf.so
tetris/tetris: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.12.8
tetris/tetris: tetris/CMakeFiles/tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/asus/Desktop/Tetris/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable tetris"
	cd /home/asus/Desktop/Tetris/build/tetris && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tetris.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tetris/CMakeFiles/tetris.dir/build: tetris/tetris

.PHONY : tetris/CMakeFiles/tetris.dir/build

tetris/CMakeFiles/tetris.dir/clean:
	cd /home/asus/Desktop/Tetris/build/tetris && $(CMAKE_COMMAND) -P CMakeFiles/tetris.dir/cmake_clean.cmake
.PHONY : tetris/CMakeFiles/tetris.dir/clean

tetris/CMakeFiles/tetris.dir/depend: tetris/qrc_res.o
	cd /home/asus/Desktop/Tetris/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/asus/Desktop/Tetris /home/asus/Desktop/Tetris/tetris /home/asus/Desktop/Tetris/build /home/asus/Desktop/Tetris/build/tetris /home/asus/Desktop/Tetris/build/tetris/CMakeFiles/tetris.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tetris/CMakeFiles/tetris.dir/depend

