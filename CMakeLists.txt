cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyBackendProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find the Python library and include directories
find_package(Python3 REQUIRED COMPONENTS Development)

# Add the include directory for your project
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the include directory for Python
include_directories(${Python3_INCLUDE_DIRS})

# Add the executable
add_executable(my_backend src/main.cpp src/my_source.cpp)

# Link the Python library
target_link_libraries(my_backend ${Python3_LIBRARIES})
