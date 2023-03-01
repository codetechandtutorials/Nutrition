cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.

file(GLOB SRCS "src/*.cpp")
file(GLOB_RECURSE HDRS "include/*.h")


add_library(Nutrition
  ${SRCS}
  ${HDRS}
)

target_include_directories(Nutrition PUBLIC "${CMAKE_SOURCE_DIR}/Foundation/include/Nutrition")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Nutrition PROPERTY CXX_STANDARD 20)
endif()

add_subdirectory(tests)

