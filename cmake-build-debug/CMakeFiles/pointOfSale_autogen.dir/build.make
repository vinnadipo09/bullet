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
CMAKE_COMMAND = /home/vee/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/vee/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/vee/pointOfSale

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/vee/pointOfSale/cmake-build-debug

# Utility rule file for pointOfSale_autogen.

# Include the progress variables for this target.
include CMakeFiles/pointOfSale_autogen.dir/progress.make

CMakeFiles/pointOfSale_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/vee/pointOfSale/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target pointOfSale"
	/home/vee/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/201.7846.88/bin/cmake/linux/bin/cmake -E cmake_autogen /home/vee/pointOfSale/cmake-build-debug/CMakeFiles/pointOfSale_autogen.dir/AutogenInfo.json Debug

pointOfSale_autogen: CMakeFiles/pointOfSale_autogen
pointOfSale_autogen: CMakeFiles/pointOfSale_autogen.dir/build.make

.PHONY : pointOfSale_autogen

# Rule to build all files generated by this target.
CMakeFiles/pointOfSale_autogen.dir/build: pointOfSale_autogen

.PHONY : CMakeFiles/pointOfSale_autogen.dir/build

CMakeFiles/pointOfSale_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pointOfSale_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pointOfSale_autogen.dir/clean

CMakeFiles/pointOfSale_autogen.dir/depend:
	cd /home/vee/pointOfSale/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/vee/pointOfSale /home/vee/pointOfSale /home/vee/pointOfSale/cmake-build-debug /home/vee/pointOfSale/cmake-build-debug /home/vee/pointOfSale/cmake-build-debug/CMakeFiles/pointOfSale_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pointOfSale_autogen.dir/depend

