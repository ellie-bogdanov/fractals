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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/princess-ellie/Documents/cpp_projects/img_processing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/princess-ellie/Documents/cpp_projects/img_processing/build

# Include any dependencies generated for this target.
include CMakeFiles/img_processing.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/img_processing.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/img_processing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/img_processing.dir/flags.make

CMakeFiles/img_processing.dir/main.cpp.o: CMakeFiles/img_processing.dir/flags.make
CMakeFiles/img_processing.dir/main.cpp.o: ../main.cpp
CMakeFiles/img_processing.dir/main.cpp.o: CMakeFiles/img_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/princess-ellie/Documents/cpp_projects/img_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/img_processing.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/img_processing.dir/main.cpp.o -MF CMakeFiles/img_processing.dir/main.cpp.o.d -o CMakeFiles/img_processing.dir/main.cpp.o -c /home/princess-ellie/Documents/cpp_projects/img_processing/main.cpp

CMakeFiles/img_processing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/img_processing.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/princess-ellie/Documents/cpp_projects/img_processing/main.cpp > CMakeFiles/img_processing.dir/main.cpp.i

CMakeFiles/img_processing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/img_processing.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/princess-ellie/Documents/cpp_projects/img_processing/main.cpp -o CMakeFiles/img_processing.dir/main.cpp.s

CMakeFiles/img_processing.dir/fractal_tree.cpp.o: CMakeFiles/img_processing.dir/flags.make
CMakeFiles/img_processing.dir/fractal_tree.cpp.o: ../fractal_tree.cpp
CMakeFiles/img_processing.dir/fractal_tree.cpp.o: CMakeFiles/img_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/princess-ellie/Documents/cpp_projects/img_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/img_processing.dir/fractal_tree.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/img_processing.dir/fractal_tree.cpp.o -MF CMakeFiles/img_processing.dir/fractal_tree.cpp.o.d -o CMakeFiles/img_processing.dir/fractal_tree.cpp.o -c /home/princess-ellie/Documents/cpp_projects/img_processing/fractal_tree.cpp

CMakeFiles/img_processing.dir/fractal_tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/img_processing.dir/fractal_tree.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/princess-ellie/Documents/cpp_projects/img_processing/fractal_tree.cpp > CMakeFiles/img_processing.dir/fractal_tree.cpp.i

CMakeFiles/img_processing.dir/fractal_tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/img_processing.dir/fractal_tree.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/princess-ellie/Documents/cpp_projects/img_processing/fractal_tree.cpp -o CMakeFiles/img_processing.dir/fractal_tree.cpp.s

CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o: CMakeFiles/img_processing.dir/flags.make
CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o: ../mandelbrot_set.cpp
CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o: CMakeFiles/img_processing.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/princess-ellie/Documents/cpp_projects/img_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o -MF CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o.d -o CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o -c /home/princess-ellie/Documents/cpp_projects/img_processing/mandelbrot_set.cpp

CMakeFiles/img_processing.dir/mandelbrot_set.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/img_processing.dir/mandelbrot_set.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/princess-ellie/Documents/cpp_projects/img_processing/mandelbrot_set.cpp > CMakeFiles/img_processing.dir/mandelbrot_set.cpp.i

CMakeFiles/img_processing.dir/mandelbrot_set.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/img_processing.dir/mandelbrot_set.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/princess-ellie/Documents/cpp_projects/img_processing/mandelbrot_set.cpp -o CMakeFiles/img_processing.dir/mandelbrot_set.cpp.s

# Object files for target img_processing
img_processing_OBJECTS = \
"CMakeFiles/img_processing.dir/main.cpp.o" \
"CMakeFiles/img_processing.dir/fractal_tree.cpp.o" \
"CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o"

# External object files for target img_processing
img_processing_EXTERNAL_OBJECTS =

img_processing: CMakeFiles/img_processing.dir/main.cpp.o
img_processing: CMakeFiles/img_processing.dir/fractal_tree.cpp.o
img_processing: CMakeFiles/img_processing.dir/mandelbrot_set.cpp.o
img_processing: CMakeFiles/img_processing.dir/build.make
img_processing: /usr/local/lib/libopencv_gapi.so.4.9.0
img_processing: /usr/local/lib/libopencv_highgui.so.4.9.0
img_processing: /usr/local/lib/libopencv_ml.so.4.9.0
img_processing: /usr/local/lib/libopencv_objdetect.so.4.9.0
img_processing: /usr/local/lib/libopencv_photo.so.4.9.0
img_processing: /usr/local/lib/libopencv_stitching.so.4.9.0
img_processing: /usr/local/lib/libopencv_video.so.4.9.0
img_processing: /usr/local/lib/libopencv_videoio.so.4.9.0
img_processing: /usr/local/lib/libopencv_imgcodecs.so.4.9.0
img_processing: /usr/local/lib/libopencv_dnn.so.4.9.0
img_processing: /usr/local/lib/libopencv_calib3d.so.4.9.0
img_processing: /usr/local/lib/libopencv_features2d.so.4.9.0
img_processing: /usr/local/lib/libopencv_flann.so.4.9.0
img_processing: /usr/local/lib/libopencv_imgproc.so.4.9.0
img_processing: /usr/local/lib/libopencv_core.so.4.9.0
img_processing: CMakeFiles/img_processing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/princess-ellie/Documents/cpp_projects/img_processing/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable img_processing"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/img_processing.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/img_processing.dir/build: img_processing
.PHONY : CMakeFiles/img_processing.dir/build

CMakeFiles/img_processing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/img_processing.dir/cmake_clean.cmake
.PHONY : CMakeFiles/img_processing.dir/clean

CMakeFiles/img_processing.dir/depend:
	cd /home/princess-ellie/Documents/cpp_projects/img_processing/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/princess-ellie/Documents/cpp_projects/img_processing /home/princess-ellie/Documents/cpp_projects/img_processing /home/princess-ellie/Documents/cpp_projects/img_processing/build /home/princess-ellie/Documents/cpp_projects/img_processing/build /home/princess-ellie/Documents/cpp_projects/img_processing/build/CMakeFiles/img_processing.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/img_processing.dir/depend

