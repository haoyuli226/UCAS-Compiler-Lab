# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/compiler13/cact

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/compiler13/cact/build

# Include any dependencies generated for this target.
include CMakeFiles/compiler.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/compiler.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/compiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/compiler.dir/flags.make

CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o: ../grammar/CACTBaseVisitor.cpp
CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o -MF CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o.d -o CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o -c /home/compiler13/cact/grammar/CACTBaseVisitor.cpp

CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/compiler13/cact/grammar/CACTBaseVisitor.cpp > CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.i

CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/compiler13/cact/grammar/CACTBaseVisitor.cpp -o CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.s

CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o: ../grammar/CACTLexer.cpp
CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o -MF CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o.d -o CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o -c /home/compiler13/cact/grammar/CACTLexer.cpp

CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/compiler13/cact/grammar/CACTLexer.cpp > CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.i

CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/compiler13/cact/grammar/CACTLexer.cpp -o CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.s

CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o: ../grammar/CACTParser.cpp
CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o -MF CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o.d -o CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o -c /home/compiler13/cact/grammar/CACTParser.cpp

CMakeFiles/compiler.dir/grammar/CACTParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler.dir/grammar/CACTParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/compiler13/cact/grammar/CACTParser.cpp > CMakeFiles/compiler.dir/grammar/CACTParser.cpp.i

CMakeFiles/compiler.dir/grammar/CACTParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/grammar/CACTParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/compiler13/cact/grammar/CACTParser.cpp -o CMakeFiles/compiler.dir/grammar/CACTParser.cpp.s

CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o: ../grammar/CACTVisitor.cpp
CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o -MF CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o.d -o CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o -c /home/compiler13/cact/grammar/CACTVisitor.cpp

CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/compiler13/cact/grammar/CACTVisitor.cpp > CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.i

CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/compiler13/cact/grammar/CACTVisitor.cpp -o CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.s

CMakeFiles/compiler.dir/src/main.cpp.o: CMakeFiles/compiler.dir/flags.make
CMakeFiles/compiler.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/compiler.dir/src/main.cpp.o: CMakeFiles/compiler.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/compiler.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/compiler.dir/src/main.cpp.o -MF CMakeFiles/compiler.dir/src/main.cpp.o.d -o CMakeFiles/compiler.dir/src/main.cpp.o -c /home/compiler13/cact/src/main.cpp

CMakeFiles/compiler.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/compiler.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/compiler13/cact/src/main.cpp > CMakeFiles/compiler.dir/src/main.cpp.i

CMakeFiles/compiler.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/compiler.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/compiler13/cact/src/main.cpp -o CMakeFiles/compiler.dir/src/main.cpp.s

# Object files for target compiler
compiler_OBJECTS = \
"CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o" \
"CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o" \
"CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o" \
"CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o" \
"CMakeFiles/compiler.dir/src/main.cpp.o"

# External object files for target compiler
compiler_EXTERNAL_OBJECTS =

compiler: CMakeFiles/compiler.dir/grammar/CACTBaseVisitor.cpp.o
compiler: CMakeFiles/compiler.dir/grammar/CACTLexer.cpp.o
compiler: CMakeFiles/compiler.dir/grammar/CACTParser.cpp.o
compiler: CMakeFiles/compiler.dir/grammar/CACTVisitor.cpp.o
compiler: CMakeFiles/compiler.dir/src/main.cpp.o
compiler: CMakeFiles/compiler.dir/build.make
compiler: libantlr.a
compiler: CMakeFiles/compiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/compiler13/cact/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable compiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/compiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/compiler.dir/build: compiler
.PHONY : CMakeFiles/compiler.dir/build

CMakeFiles/compiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/compiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/compiler.dir/clean

CMakeFiles/compiler.dir/depend:
	cd /home/compiler13/cact/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/compiler13/cact /home/compiler13/cact /home/compiler13/cact/build /home/compiler13/cact/build /home/compiler13/cact/build/CMakeFiles/compiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/compiler.dir/depend

