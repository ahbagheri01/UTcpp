# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\UTAP\codes\learn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\UTAP\codes\learn\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learn.dir/flags.make

CMakeFiles/learn.dir/main.cpp.obj: CMakeFiles/learn.dir/flags.make
CMakeFiles/learn.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UTAP\codes\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learn.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\learn.dir\main.cpp.obj -c D:\UTAP\codes\learn\main.cpp

CMakeFiles/learn.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UTAP\codes\learn\main.cpp > CMakeFiles\learn.dir\main.cpp.i

CMakeFiles/learn.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UTAP\codes\learn\main.cpp -o CMakeFiles\learn.dir\main.cpp.s

CMakeFiles/learn.dir/Date.cpp.obj: CMakeFiles/learn.dir/flags.make
CMakeFiles/learn.dir/Date.cpp.obj: ../Date.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\UTAP\codes\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/learn.dir/Date.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\learn.dir\Date.cpp.obj -c D:\UTAP\codes\learn\Date.cpp

CMakeFiles/learn.dir/Date.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn.dir/Date.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\UTAP\codes\learn\Date.cpp > CMakeFiles\learn.dir\Date.cpp.i

CMakeFiles/learn.dir/Date.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn.dir/Date.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\UTAP\codes\learn\Date.cpp -o CMakeFiles\learn.dir\Date.cpp.s

# Object files for target learn
learn_OBJECTS = \
"CMakeFiles/learn.dir/main.cpp.obj" \
"CMakeFiles/learn.dir/Date.cpp.obj"

# External object files for target learn
learn_EXTERNAL_OBJECTS =

learn.exe: CMakeFiles/learn.dir/main.cpp.obj
learn.exe: CMakeFiles/learn.dir/Date.cpp.obj
learn.exe: CMakeFiles/learn.dir/build.make
learn.exe: CMakeFiles/learn.dir/linklibs.rsp
learn.exe: CMakeFiles/learn.dir/objects1.rsp
learn.exe: CMakeFiles/learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\UTAP\codes\learn\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable learn.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\learn.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learn.dir/build: learn.exe

.PHONY : CMakeFiles/learn.dir/build

CMakeFiles/learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\learn.dir\cmake_clean.cmake
.PHONY : CMakeFiles/learn.dir/clean

CMakeFiles/learn.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\UTAP\codes\learn D:\UTAP\codes\learn D:\UTAP\codes\learn\cmake-build-debug D:\UTAP\codes\learn\cmake-build-debug D:\UTAP\codes\learn\cmake-build-debug\CMakeFiles\learn.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learn.dir/depend
