# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = C:/cmake-3.29.2-windows-x86_64/cmake-3.29.2-windows-x86_64/bin/cmake.exe

# The command to remove a file.
RM = C:/cmake-3.29.2-windows-x86_64/cmake-3.29.2-windows-x86_64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2

# Include any dependencies generated for this target.
include Unit_Tests/CMakeFiles/Test_CMake.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include Unit_Tests/CMakeFiles/Test_CMake.dir/compiler_depend.make

# Include the progress variables for this target.
include Unit_Tests/CMakeFiles/Test_CMake.dir/progress.make

# Include the compile flags for this target's objects.
include Unit_Tests/CMakeFiles/Test_CMake.dir/flags.make

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/flags.make
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/includes_CXX.rsp
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj: Unit_Tests/Unit_Tests_Class.cpp
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj -MF CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj.d -o CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj -c C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Class.cpp

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.i"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Class.cpp > CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.i

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.s"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Class.cpp -o CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.s

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/flags.make
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/includes_CXX.rsp
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj: Unit_Tests/Unit_Tests_Vector.cpp
Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj: Unit_Tests/CMakeFiles/Test_CMake.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj -MF CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj.d -o CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj -c C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Vector.cpp

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.i"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Vector.cpp > CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.i

Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.s"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/Unit_Tests_Vector.cpp -o CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.s

# Object files for target Test_CMake
Test_CMake_OBJECTS = \
"CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj" \
"CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj"

# External object files for target Test_CMake
Test_CMake_EXTERNAL_OBJECTS =

Unit_Tests/Test_CMake.exe: Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Class.cpp.obj
Unit_Tests/Test_CMake.exe: Unit_Tests/CMakeFiles/Test_CMake.dir/Unit_Tests_Vector.cpp.obj
Unit_Tests/Test_CMake.exe: Unit_Tests/CMakeFiles/Test_CMake.dir/build.make
Unit_Tests/Test_CMake.exe: lib/libgtest_main.a
Unit_Tests/Test_CMake.exe: libMain_CMake.a
Unit_Tests/Test_CMake.exe: lib/libgtest.a
Unit_Tests/Test_CMake.exe: Unit_Tests/CMakeFiles/Test_CMake.dir/linkLibs.rsp
Unit_Tests/Test_CMake.exe: Unit_Tests/CMakeFiles/Test_CMake.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Test_CMake.exe"
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/cmake-3.29.2-windows-x86_64/cmake-3.29.2-windows-x86_64/bin/cmake.exe -E rm -f CMakeFiles/Test_CMake.dir/objects.a
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/ar.exe qc CMakeFiles/Test_CMake.dir/objects.a @CMakeFiles/Test_CMake.dir/objects1.rsp
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && C:/msys64/ucrt64/bin/c++.exe -Wl,--whole-archive CMakeFiles/Test_CMake.dir/objects.a -Wl,--no-whole-archive -o Test_CMake.exe -Wl,--out-implib,libTest_CMake.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/Test_CMake.dir/linkLibs.rsp

# Rule to build all files generated by this target.
Unit_Tests/CMakeFiles/Test_CMake.dir/build: Unit_Tests/Test_CMake.exe
.PHONY : Unit_Tests/CMakeFiles/Test_CMake.dir/build

Unit_Tests/CMakeFiles/Test_CMake.dir/clean:
	cd C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests && $(CMAKE_COMMAND) -P CMakeFiles/Test_CMake.dir/cmake_clean.cmake
.PHONY : Unit_Tests/CMakeFiles/Test_CMake.dir/clean

Unit_Tests/CMakeFiles/Test_CMake.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2 C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2 C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests C:/Users/sgiky/Documents/GitHub/OBJ_Uzduotys2/Unit_Tests/CMakeFiles/Test_CMake.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : Unit_Tests/CMakeFiles/Test_CMake.dir/depend

