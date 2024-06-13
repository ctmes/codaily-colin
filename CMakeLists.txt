cmake_minimum_required(VERSION 3.10)

# Set the project name
project(MyBackendProject VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the include directory for your project
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add the include directory for Python
include_directories(${PROJECT_SOURCE_DIR}/include/python3.12)

# Add the executable
add_executable(my_backend src/main.cpp src/my_source.cpp)

# Link the Python library
target_link_libraries(my_backend ${PROJECT_SOURCE_DIR}/lib/libpython3.12.dylib)
