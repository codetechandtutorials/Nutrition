# CMakeList.txt : CMake project for Nutrition, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Nutrition")

# Add source to this project's executable.
add_library(Nutrition "Nutrition.cpp" "Nutrition.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Nutrition PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
enable_testing()
add_subdirectory(tests)
