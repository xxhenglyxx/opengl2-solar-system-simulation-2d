# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.10.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.10.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/shadowlegend/zaman/computer-graphic/solar-system-simulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/shadowlegend/zaman/computer-graphic/solar-system-simulation

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/local/Cellar/cmake/3.10.2/bin/cmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	/usr/local/Cellar/cmake/3.10.1/bin/ccmake -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/shadowlegend/zaman/computer-graphic/solar-system-simulation/CMakeFiles /Users/shadowlegend/zaman/computer-graphic/solar-system-simulation/CMakeFiles/progress.marks
	$(MAKE) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /Users/shadowlegend/zaman/computer-graphic/solar-system-simulation/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named solar-system-simulation

# Build rule for target.
solar-system-simulation: cmake_check_build_system
	$(MAKE) -f CMakeFiles/Makefile2 solar-system-simulation
.PHONY : solar-system-simulation

# fast build rule for target.
solar-system-simulation/fast:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/build
.PHONY : solar-system-simulation/fast

src/app/app.o: src/app/app.cpp.o

.PHONY : src/app/app.o

# target to build an object file
src/app/app.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/app.cpp.o
.PHONY : src/app/app.cpp.o

src/app/app.i: src/app/app.cpp.i

.PHONY : src/app/app.i

# target to preprocess a source file
src/app/app.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/app.cpp.i
.PHONY : src/app/app.cpp.i

src/app/app.s: src/app/app.cpp.s

.PHONY : src/app/app.s

# target to generate assembly for a file
src/app/app.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/app.cpp.s
.PHONY : src/app/app.cpp.s

src/app/idle.o: src/app/idle.cpp.o

.PHONY : src/app/idle.o

# target to build an object file
src/app/idle.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/idle.cpp.o
.PHONY : src/app/idle.cpp.o

src/app/idle.i: src/app/idle.cpp.i

.PHONY : src/app/idle.i

# target to preprocess a source file
src/app/idle.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/idle.cpp.i
.PHONY : src/app/idle.cpp.i

src/app/idle.s: src/app/idle.cpp.s

.PHONY : src/app/idle.s

# target to generate assembly for a file
src/app/idle.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/idle.cpp.s
.PHONY : src/app/idle.cpp.s

src/app/render.o: src/app/render.cpp.o

.PHONY : src/app/render.o

# target to build an object file
src/app/render.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/render.cpp.o
.PHONY : src/app/render.cpp.o

src/app/render.i: src/app/render.cpp.i

.PHONY : src/app/render.i

# target to preprocess a source file
src/app/render.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/render.cpp.i
.PHONY : src/app/render.cpp.i

src/app/render.s: src/app/render.cpp.s

.PHONY : src/app/render.s

# target to generate assembly for a file
src/app/render.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/app/render.cpp.s
.PHONY : src/app/render.cpp.s

src/main.o: src/main.cpp.o

.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i

.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s

.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/modules.o: src/modules.cpp.o

.PHONY : src/modules.o

# target to build an object file
src/modules.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/modules.cpp.o
.PHONY : src/modules.cpp.o

src/modules.i: src/modules.cpp.i

.PHONY : src/modules.i

# target to preprocess a source file
src/modules.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/modules.cpp.i
.PHONY : src/modules.cpp.i

src/modules.s: src/modules.cpp.s

.PHONY : src/modules.s

# target to generate assembly for a file
src/modules.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/modules.cpp.s
.PHONY : src/modules.cpp.s

src/object.o: src/object.cpp.o

.PHONY : src/object.o

# target to build an object file
src/object.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/object.cpp.o
.PHONY : src/object.cpp.o

src/object.i: src/object.cpp.i

.PHONY : src/object.i

# target to preprocess a source file
src/object.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/object.cpp.i
.PHONY : src/object.cpp.i

src/object.s: src/object.cpp.s

.PHONY : src/object.s

# target to generate assembly for a file
src/object.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/object.cpp.s
.PHONY : src/object.cpp.s

src/orbit_path.o: src/orbit_path.cpp.o

.PHONY : src/orbit_path.o

# target to build an object file
src/orbit_path.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/orbit_path.cpp.o
.PHONY : src/orbit_path.cpp.o

src/orbit_path.i: src/orbit_path.cpp.i

.PHONY : src/orbit_path.i

# target to preprocess a source file
src/orbit_path.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/orbit_path.cpp.i
.PHONY : src/orbit_path.cpp.i

src/orbit_path.s: src/orbit_path.cpp.s

.PHONY : src/orbit_path.s

# target to generate assembly for a file
src/orbit_path.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/orbit_path.cpp.s
.PHONY : src/orbit_path.cpp.s

src/space.o: src/space.cpp.o

.PHONY : src/space.o

# target to build an object file
src/space.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/space.cpp.o
.PHONY : src/space.cpp.o

src/space.i: src/space.cpp.i

.PHONY : src/space.i

# target to preprocess a source file
src/space.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/space.cpp.i
.PHONY : src/space.cpp.i

src/space.s: src/space.cpp.s

.PHONY : src/space.s

# target to generate assembly for a file
src/space.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/space.cpp.s
.PHONY : src/space.cpp.s

src/sphere.o: src/sphere.cpp.o

.PHONY : src/sphere.o

# target to build an object file
src/sphere.cpp.o:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/sphere.cpp.o
.PHONY : src/sphere.cpp.o

src/sphere.i: src/sphere.cpp.i

.PHONY : src/sphere.i

# target to preprocess a source file
src/sphere.cpp.i:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/sphere.cpp.i
.PHONY : src/sphere.cpp.i

src/sphere.s: src/sphere.cpp.s

.PHONY : src/sphere.s

# target to generate assembly for a file
src/sphere.cpp.s:
	$(MAKE) -f CMakeFiles/solar-system-simulation.dir/build.make CMakeFiles/solar-system-simulation.dir/src/sphere.cpp.s
.PHONY : src/sphere.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... rebuild_cache"
	@echo "... edit_cache"
	@echo "... solar-system-simulation"
	@echo "... src/app/app.o"
	@echo "... src/app/app.i"
	@echo "... src/app/app.s"
	@echo "... src/app/idle.o"
	@echo "... src/app/idle.i"
	@echo "... src/app/idle.s"
	@echo "... src/app/render.o"
	@echo "... src/app/render.i"
	@echo "... src/app/render.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/modules.o"
	@echo "... src/modules.i"
	@echo "... src/modules.s"
	@echo "... src/object.o"
	@echo "... src/object.i"
	@echo "... src/object.s"
	@echo "... src/orbit_path.o"
	@echo "... src/orbit_path.i"
	@echo "... src/orbit_path.s"
	@echo "... src/space.o"
	@echo "... src/space.i"
	@echo "... src/space.s"
	@echo "... src/sphere.o"
	@echo "... src/sphere.i"
	@echo "... src/sphere.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

