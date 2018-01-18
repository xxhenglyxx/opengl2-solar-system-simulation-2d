
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(solar-system-simulation)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)

find_package(OpenGL)
find_package(GLUT)

find_library(COCOA Cocoa)

include_directories(
    include
    ${GLUT_INCLUDE_DIR}
    ${OPENGL_INCLUDE_DIR}
)

add_executable(
    solar-system-simulation
    src/main.cpp
    src/modules.cpp
    src/object.cpp
    src/sphere.cpp
)

target_link_libraries(
    solar-system-simulation
    ${COCOA_LIBRARIES}
    ${OPENGL_LIBRARIES}
    ${GLUT_LIBRARIES}
)