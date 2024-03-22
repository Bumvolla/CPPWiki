# CMakeList.txt : CMake project for Intermediate, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Intermediate "Intermediate.cpp" "Intermediate.h" "arrays.cpp" "arrays.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Intermediate PROPERTY CXX_STANDARD 20)
endif()