# Define the CMake Version needed
cmake_minimum_required(VERSION 3.0.0)

# Define a name for the project
project(cmake_usage_example)

# Define the path for the header files to be included
include_directories(include)

# Define build flags
# set(CMAKE_CXX_FLAGS "-Wall") 

# Define the version of C++ to be used
set(CMAKE_CXX_STANDARD 14)

# Define the path to the source code files to the variable string SOURCES
set(SOURCES src/main.cpp src/computations.cpp)

# Define the final executable binary named "cmake_usage_example", from the source code files to
# be found through the path reflected by the strin variable SOURCES
add_executable(cmake_usage_example src/main.cpp ${SOURCES})

set_target_properties(cmake_usage_example PROPERTIES LINKER_LANGUAGE CXX)


