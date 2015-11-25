cmake_minimum_required(VERSION 3.3)
project(ExtendableGameFramework)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCES "EGF/*.h" "EGF/*.cpp" "EGF/*.tpp")
file(GLOB TESTS "test/*.h" "test/*.cpp")

add_executable(ExtendableGameFramework ${SOURCES} ${TESTS})

target_link_libraries(ExtendableGameFramework opengl32)