# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MarketPlaces.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MarketPlaces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MarketPlaces.dir/flags.make

CMakeFiles/MarketPlaces.dir/main.c.obj: CMakeFiles/MarketPlaces.dir/flags.make
CMakeFiles/MarketPlaces.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/MarketPlaces.dir/main.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MarketPlaces.dir\main.c.obj   -c C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\main.c

CMakeFiles/MarketPlaces.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MarketPlaces.dir/main.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\main.c > CMakeFiles\MarketPlaces.dir\main.c.i

CMakeFiles/MarketPlaces.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MarketPlaces.dir/main.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\main.c -o CMakeFiles\MarketPlaces.dir\main.c.s

CMakeFiles/MarketPlaces.dir/Functions.c.obj: CMakeFiles/MarketPlaces.dir/flags.make
CMakeFiles/MarketPlaces.dir/Functions.c.obj: ../Functions.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/MarketPlaces.dir/Functions.c.obj"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\MarketPlaces.dir\Functions.c.obj   -c C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\Functions.c

CMakeFiles/MarketPlaces.dir/Functions.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/MarketPlaces.dir/Functions.c.i"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\Functions.c > CMakeFiles\MarketPlaces.dir\Functions.c.i

CMakeFiles/MarketPlaces.dir/Functions.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/MarketPlaces.dir/Functions.c.s"
	C:\PROGRA~1\CODEBL~1\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\Functions.c -o CMakeFiles\MarketPlaces.dir\Functions.c.s

# Object files for target MarketPlaces
MarketPlaces_OBJECTS = \
"CMakeFiles/MarketPlaces.dir/main.c.obj" \
"CMakeFiles/MarketPlaces.dir/Functions.c.obj"

# External object files for target MarketPlaces
MarketPlaces_EXTERNAL_OBJECTS =

MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/main.c.obj
MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/Functions.c.obj
MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/build.make
MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/linklibs.rsp
MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/objects1.rsp
MarketPlaces.exe: CMakeFiles/MarketPlaces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable MarketPlaces.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MarketPlaces.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MarketPlaces.dir/build: MarketPlaces.exe

.PHONY : CMakeFiles/MarketPlaces.dir/build

CMakeFiles/MarketPlaces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MarketPlaces.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MarketPlaces.dir/clean

CMakeFiles/MarketPlaces.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug C:\Users\simon\Documents\DSA_Project\Aut_A_DSA_Project\MarketPlaces\cmake-build-debug\CMakeFiles\MarketPlaces.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MarketPlaces.dir/depend

