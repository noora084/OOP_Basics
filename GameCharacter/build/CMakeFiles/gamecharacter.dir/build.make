# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.31

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\sibegilan\Desktop\HW2\gamecharacter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\sibegilan\Desktop\HW2\gamecharacter\build

# Include any dependencies generated for this target.
include CMakeFiles/gamecharacter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/gamecharacter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/gamecharacter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/gamecharacter.dir/flags.make

CMakeFiles/gamecharacter.dir/codegen:
.PHONY : CMakeFiles/gamecharacter.dir/codegen

CMakeFiles/gamecharacter.dir/game.cpp.obj: CMakeFiles/gamecharacter.dir/flags.make
CMakeFiles/gamecharacter.dir/game.cpp.obj: C:/Users/sibegilan/Desktop/HW2/gamecharacter/game.cpp
CMakeFiles/gamecharacter.dir/game.cpp.obj: CMakeFiles/gamecharacter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sibegilan\Desktop\HW2\gamecharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/gamecharacter.dir/game.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gamecharacter.dir/game.cpp.obj -MF CMakeFiles\gamecharacter.dir\game.cpp.obj.d -o CMakeFiles\gamecharacter.dir\game.cpp.obj -c C:\Users\sibegilan\Desktop\HW2\gamecharacter\game.cpp

CMakeFiles/gamecharacter.dir/game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gamecharacter.dir/game.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sibegilan\Desktop\HW2\gamecharacter\game.cpp > CMakeFiles\gamecharacter.dir\game.cpp.i

CMakeFiles/gamecharacter.dir/game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gamecharacter.dir/game.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sibegilan\Desktop\HW2\gamecharacter\game.cpp -o CMakeFiles\gamecharacter.dir\game.cpp.s

CMakeFiles/gamecharacter.dir/character.cpp.obj: CMakeFiles/gamecharacter.dir/flags.make
CMakeFiles/gamecharacter.dir/character.cpp.obj: C:/Users/sibegilan/Desktop/HW2/gamecharacter/character.cpp
CMakeFiles/gamecharacter.dir/character.cpp.obj: CMakeFiles/gamecharacter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sibegilan\Desktop\HW2\gamecharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/gamecharacter.dir/character.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gamecharacter.dir/character.cpp.obj -MF CMakeFiles\gamecharacter.dir\character.cpp.obj.d -o CMakeFiles\gamecharacter.dir\character.cpp.obj -c C:\Users\sibegilan\Desktop\HW2\gamecharacter\character.cpp

CMakeFiles/gamecharacter.dir/character.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gamecharacter.dir/character.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sibegilan\Desktop\HW2\gamecharacter\character.cpp > CMakeFiles\gamecharacter.dir\character.cpp.i

CMakeFiles/gamecharacter.dir/character.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gamecharacter.dir/character.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sibegilan\Desktop\HW2\gamecharacter\character.cpp -o CMakeFiles\gamecharacter.dir\character.cpp.s

CMakeFiles/gamecharacter.dir/main.cpp.obj: CMakeFiles/gamecharacter.dir/flags.make
CMakeFiles/gamecharacter.dir/main.cpp.obj: C:/Users/sibegilan/Desktop/HW2/gamecharacter/main.cpp
CMakeFiles/gamecharacter.dir/main.cpp.obj: CMakeFiles/gamecharacter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:\Users\sibegilan\Desktop\HW2\gamecharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/gamecharacter.dir/main.cpp.obj"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/gamecharacter.dir/main.cpp.obj -MF CMakeFiles\gamecharacter.dir\main.cpp.obj.d -o CMakeFiles\gamecharacter.dir\main.cpp.obj -c C:\Users\sibegilan\Desktop\HW2\gamecharacter\main.cpp

CMakeFiles/gamecharacter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/gamecharacter.dir/main.cpp.i"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\sibegilan\Desktop\HW2\gamecharacter\main.cpp > CMakeFiles\gamecharacter.dir\main.cpp.i

CMakeFiles/gamecharacter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/gamecharacter.dir/main.cpp.s"
	C:\MinGW\bin\c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\sibegilan\Desktop\HW2\gamecharacter\main.cpp -o CMakeFiles\gamecharacter.dir\main.cpp.s

# Object files for target gamecharacter
gamecharacter_OBJECTS = \
"CMakeFiles/gamecharacter.dir/game.cpp.obj" \
"CMakeFiles/gamecharacter.dir/character.cpp.obj" \
"CMakeFiles/gamecharacter.dir/main.cpp.obj"

# External object files for target gamecharacter
gamecharacter_EXTERNAL_OBJECTS =

gamecharacter.exe: CMakeFiles/gamecharacter.dir/game.cpp.obj
gamecharacter.exe: CMakeFiles/gamecharacter.dir/character.cpp.obj
gamecharacter.exe: CMakeFiles/gamecharacter.dir/main.cpp.obj
gamecharacter.exe: CMakeFiles/gamecharacter.dir/build.make
gamecharacter.exe: CMakeFiles/gamecharacter.dir/linkLibs.rsp
gamecharacter.exe: CMakeFiles/gamecharacter.dir/objects1.rsp
gamecharacter.exe: CMakeFiles/gamecharacter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:\Users\sibegilan\Desktop\HW2\gamecharacter\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable gamecharacter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\gamecharacter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/gamecharacter.dir/build: gamecharacter.exe
.PHONY : CMakeFiles/gamecharacter.dir/build

CMakeFiles/gamecharacter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\gamecharacter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/gamecharacter.dir/clean

CMakeFiles/gamecharacter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\sibegilan\Desktop\HW2\gamecharacter C:\Users\sibegilan\Desktop\HW2\gamecharacter C:\Users\sibegilan\Desktop\HW2\gamecharacter\build C:\Users\sibegilan\Desktop\HW2\gamecharacter\build C:\Users\sibegilan\Desktop\HW2\gamecharacter\build\CMakeFiles\gamecharacter.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/gamecharacter.dir/depend

