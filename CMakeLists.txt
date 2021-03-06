
cmake_minimum_required(VERSION 3.8 FATAL_ERROR)

project(solar-system-simulation)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY bin)
set(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake/modules)
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#if(NOT CMAKE_BUILD_TYPE)
#  set(CMAKE_BUILD_TYPE Release)
#endif()

#set(CMAKE_CXX_FLAGS "-Wall -Wextra")
#set(CMAKE_CXX_FLAGS_DEBUG "-g")
#set(CMAKE_CXX_FLAGS_RELEASE "-O3")

find_package(OpenGL)
find_package(GLUT)
find_package(SOIL2)

find_library(COCOA Cocoa)

include_directories(
    include
    lib
    ${GLUT_INCLUDE_DIR}
    ${OPENGL_INCLUDE_DIR}
)

add_executable(
    solar-system-simulation
    src/main.cpp
    src/modules.cpp
    src/object.cpp
    src/sphere.cpp
    src/space.cpp
    src/orbit_path.cpp
    src/app/app.cpp
    src/app/render.cpp
    src/app/idle.cpp
)

target_link_libraries(
    solar-system-simulation
    ${COCOA_LIBRARY}
    ${OPENGL_LIBRARY}
    ${SOIL2_LIBRARY}
    ${GLUT_LIBRARY}
)