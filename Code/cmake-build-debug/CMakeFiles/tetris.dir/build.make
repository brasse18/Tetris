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
CMAKE_COMMAND = /opt/clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /opt/clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brasse/projects/Tetris/Code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brasse/projects/Tetris/Code/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/tetris.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tetris.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tetris.dir/flags.make

CMakeFiles/tetris.dir/main.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tetris.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/main.cpp.o -c /home/brasse/projects/Tetris/Code/main.cpp

CMakeFiles/tetris.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/main.cpp > CMakeFiles/tetris.dir/main.cpp.i

CMakeFiles/tetris.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/main.cpp -o CMakeFiles/tetris.dir/main.cpp.s

CMakeFiles/tetris.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/main.cpp.o.requires

CMakeFiles/tetris.dir/main.cpp.o.provides: CMakeFiles/tetris.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/main.cpp.o.provides

CMakeFiles/tetris.dir/main.cpp.o.provides.build: CMakeFiles/tetris.dir/main.cpp.o


CMakeFiles/tetris.dir/Blocks.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Blocks.cpp.o: ../Blocks.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tetris.dir/Blocks.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/Blocks.cpp.o -c /home/brasse/projects/Tetris/Code/Blocks.cpp

CMakeFiles/tetris.dir/Blocks.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Blocks.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/Blocks.cpp > CMakeFiles/tetris.dir/Blocks.cpp.i

CMakeFiles/tetris.dir/Blocks.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Blocks.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/Blocks.cpp -o CMakeFiles/tetris.dir/Blocks.cpp.s

CMakeFiles/tetris.dir/Blocks.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/Blocks.cpp.o.requires

CMakeFiles/tetris.dir/Blocks.cpp.o.provides: CMakeFiles/tetris.dir/Blocks.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/Blocks.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/Blocks.cpp.o.provides

CMakeFiles/tetris.dir/Blocks.cpp.o.provides.build: CMakeFiles/tetris.dir/Blocks.cpp.o


CMakeFiles/tetris.dir/BlocksT.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/BlocksT.cpp.o: ../BlocksT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tetris.dir/BlocksT.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/BlocksT.cpp.o -c /home/brasse/projects/Tetris/Code/BlocksT.cpp

CMakeFiles/tetris.dir/BlocksT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/BlocksT.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/BlocksT.cpp > CMakeFiles/tetris.dir/BlocksT.cpp.i

CMakeFiles/tetris.dir/BlocksT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/BlocksT.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/BlocksT.cpp -o CMakeFiles/tetris.dir/BlocksT.cpp.s

CMakeFiles/tetris.dir/BlocksT.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/BlocksT.cpp.o.requires

CMakeFiles/tetris.dir/BlocksT.cpp.o.provides: CMakeFiles/tetris.dir/BlocksT.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/BlocksT.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/BlocksT.cpp.o.provides

CMakeFiles/tetris.dir/BlocksT.cpp.o.provides.build: CMakeFiles/tetris.dir/BlocksT.cpp.o


CMakeFiles/tetris.dir/BlocksL.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/BlocksL.cpp.o: ../BlocksL.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tetris.dir/BlocksL.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/BlocksL.cpp.o -c /home/brasse/projects/Tetris/Code/BlocksL.cpp

CMakeFiles/tetris.dir/BlocksL.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/BlocksL.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/BlocksL.cpp > CMakeFiles/tetris.dir/BlocksL.cpp.i

CMakeFiles/tetris.dir/BlocksL.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/BlocksL.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/BlocksL.cpp -o CMakeFiles/tetris.dir/BlocksL.cpp.s

CMakeFiles/tetris.dir/BlocksL.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/BlocksL.cpp.o.requires

CMakeFiles/tetris.dir/BlocksL.cpp.o.provides: CMakeFiles/tetris.dir/BlocksL.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/BlocksL.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/BlocksL.cpp.o.provides

CMakeFiles/tetris.dir/BlocksL.cpp.o.provides.build: CMakeFiles/tetris.dir/BlocksL.cpp.o


CMakeFiles/tetris.dir/BlocksS.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/BlocksS.cpp.o: ../BlocksS.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/tetris.dir/BlocksS.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/BlocksS.cpp.o -c /home/brasse/projects/Tetris/Code/BlocksS.cpp

CMakeFiles/tetris.dir/BlocksS.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/BlocksS.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/BlocksS.cpp > CMakeFiles/tetris.dir/BlocksS.cpp.i

CMakeFiles/tetris.dir/BlocksS.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/BlocksS.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/BlocksS.cpp -o CMakeFiles/tetris.dir/BlocksS.cpp.s

CMakeFiles/tetris.dir/BlocksS.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/BlocksS.cpp.o.requires

CMakeFiles/tetris.dir/BlocksS.cpp.o.provides: CMakeFiles/tetris.dir/BlocksS.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/BlocksS.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/BlocksS.cpp.o.provides

CMakeFiles/tetris.dir/BlocksS.cpp.o.provides.build: CMakeFiles/tetris.dir/BlocksS.cpp.o


CMakeFiles/tetris.dir/Game.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Game.cpp.o: ../Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/tetris.dir/Game.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/Game.cpp.o -c /home/brasse/projects/Tetris/Code/Game.cpp

CMakeFiles/tetris.dir/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Game.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/Game.cpp > CMakeFiles/tetris.dir/Game.cpp.i

CMakeFiles/tetris.dir/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Game.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/Game.cpp -o CMakeFiles/tetris.dir/Game.cpp.s

CMakeFiles/tetris.dir/Game.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/Game.cpp.o.requires

CMakeFiles/tetris.dir/Game.cpp.o.provides: CMakeFiles/tetris.dir/Game.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/Game.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/Game.cpp.o.provides

CMakeFiles/tetris.dir/Game.cpp.o.provides.build: CMakeFiles/tetris.dir/Game.cpp.o


CMakeFiles/tetris.dir/Box.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Box.cpp.o: ../Box.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/tetris.dir/Box.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/Box.cpp.o -c /home/brasse/projects/Tetris/Code/Box.cpp

CMakeFiles/tetris.dir/Box.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Box.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/Box.cpp > CMakeFiles/tetris.dir/Box.cpp.i

CMakeFiles/tetris.dir/Box.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Box.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/Box.cpp -o CMakeFiles/tetris.dir/Box.cpp.s

CMakeFiles/tetris.dir/Box.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/Box.cpp.o.requires

CMakeFiles/tetris.dir/Box.cpp.o.provides: CMakeFiles/tetris.dir/Box.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/Box.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/Box.cpp.o.provides

CMakeFiles/tetris.dir/Box.cpp.o.provides.build: CMakeFiles/tetris.dir/Box.cpp.o


CMakeFiles/tetris.dir/Playfild.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Playfild.cpp.o: ../Playfild.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/tetris.dir/Playfild.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/Playfild.cpp.o -c /home/brasse/projects/Tetris/Code/Playfild.cpp

CMakeFiles/tetris.dir/Playfild.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Playfild.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/Playfild.cpp > CMakeFiles/tetris.dir/Playfild.cpp.i

CMakeFiles/tetris.dir/Playfild.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Playfild.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/Playfild.cpp -o CMakeFiles/tetris.dir/Playfild.cpp.s

CMakeFiles/tetris.dir/Playfild.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/Playfild.cpp.o.requires

CMakeFiles/tetris.dir/Playfild.cpp.o.provides: CMakeFiles/tetris.dir/Playfild.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/Playfild.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/Playfild.cpp.o.provides

CMakeFiles/tetris.dir/Playfild.cpp.o.provides.build: CMakeFiles/tetris.dir/Playfild.cpp.o


CMakeFiles/tetris.dir/Menu.cpp.o: CMakeFiles/tetris.dir/flags.make
CMakeFiles/tetris.dir/Menu.cpp.o: ../Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/tetris.dir/Menu.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tetris.dir/Menu.cpp.o -c /home/brasse/projects/Tetris/Code/Menu.cpp

CMakeFiles/tetris.dir/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tetris.dir/Menu.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brasse/projects/Tetris/Code/Menu.cpp > CMakeFiles/tetris.dir/Menu.cpp.i

CMakeFiles/tetris.dir/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tetris.dir/Menu.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brasse/projects/Tetris/Code/Menu.cpp -o CMakeFiles/tetris.dir/Menu.cpp.s

CMakeFiles/tetris.dir/Menu.cpp.o.requires:

.PHONY : CMakeFiles/tetris.dir/Menu.cpp.o.requires

CMakeFiles/tetris.dir/Menu.cpp.o.provides: CMakeFiles/tetris.dir/Menu.cpp.o.requires
	$(MAKE) -f CMakeFiles/tetris.dir/build.make CMakeFiles/tetris.dir/Menu.cpp.o.provides.build
.PHONY : CMakeFiles/tetris.dir/Menu.cpp.o.provides

CMakeFiles/tetris.dir/Menu.cpp.o.provides.build: CMakeFiles/tetris.dir/Menu.cpp.o


# Object files for target tetris
tetris_OBJECTS = \
"CMakeFiles/tetris.dir/main.cpp.o" \
"CMakeFiles/tetris.dir/Blocks.cpp.o" \
"CMakeFiles/tetris.dir/BlocksT.cpp.o" \
"CMakeFiles/tetris.dir/BlocksL.cpp.o" \
"CMakeFiles/tetris.dir/BlocksS.cpp.o" \
"CMakeFiles/tetris.dir/Game.cpp.o" \
"CMakeFiles/tetris.dir/Box.cpp.o" \
"CMakeFiles/tetris.dir/Playfild.cpp.o" \
"CMakeFiles/tetris.dir/Menu.cpp.o"

# External object files for target tetris
tetris_EXTERNAL_OBJECTS =

tetris: CMakeFiles/tetris.dir/main.cpp.o
tetris: CMakeFiles/tetris.dir/Blocks.cpp.o
tetris: CMakeFiles/tetris.dir/BlocksT.cpp.o
tetris: CMakeFiles/tetris.dir/BlocksL.cpp.o
tetris: CMakeFiles/tetris.dir/BlocksS.cpp.o
tetris: CMakeFiles/tetris.dir/Game.cpp.o
tetris: CMakeFiles/tetris.dir/Box.cpp.o
tetris: CMakeFiles/tetris.dir/Playfild.cpp.o
tetris: CMakeFiles/tetris.dir/Menu.cpp.o
tetris: CMakeFiles/tetris.dir/build.make
tetris: CMakeFiles/tetris.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable tetris"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tetris.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tetris.dir/build: tetris

.PHONY : CMakeFiles/tetris.dir/build

CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/main.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/Blocks.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/BlocksT.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/BlocksL.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/BlocksS.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/Game.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/Box.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/Playfild.cpp.o.requires
CMakeFiles/tetris.dir/requires: CMakeFiles/tetris.dir/Menu.cpp.o.requires

.PHONY : CMakeFiles/tetris.dir/requires

CMakeFiles/tetris.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tetris.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tetris.dir/clean

CMakeFiles/tetris.dir/depend:
	cd /home/brasse/projects/Tetris/Code/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brasse/projects/Tetris/Code /home/brasse/projects/Tetris/Code /home/brasse/projects/Tetris/Code/cmake-build-debug /home/brasse/projects/Tetris/Code/cmake-build-debug /home/brasse/projects/Tetris/Code/cmake-build-debug/CMakeFiles/tetris.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tetris.dir/depend

