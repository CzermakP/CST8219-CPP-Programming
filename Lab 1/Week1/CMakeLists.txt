# CMakeList.txt : CMake project for Week1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.2)

project ("Week1")

# Add source to this project's executable.
add_executable (PatrickCzermak_Lab1 "Week1.cpp" "Week1.h")     # ABDULLAH -> UNABLE TO CHANGE TO ' PatrickCzermak_Lab1 ' ?????

set_property(TARGET PatrickCzermak_Lab1 PROPERTY CXX_STANDARD 11)
set_property(TARGET PatrickCzermak_Lab1 PROPERTY CXX_STANDARD_REQUIRED ON)

# TODO: Add tests and install targets if needed.
