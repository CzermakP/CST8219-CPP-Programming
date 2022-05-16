# CMakeList.txt : CMake project for Lab8, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Lab8")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /openmp")

# Add source to this project's executable.
add_library (Lab8 SHARED "Lab8.cpp" "Lab8.h")

target_include_directories(Lab8 PRIVATE
	"C:\\Program Files\\Java\\jdk1.8.0_271\\include"
	"C:\\Program Files\\Java\\jdk1.8.0_271\\include\\win32")

# TODO: Add tests and install targets if needed.
