cmake_minimum_required(VERSION 2.8)
project(publisher)
set(SRC_LIST main.cpp)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(publisher ${SRC_LIST})
target_link_libraries(publisher lcm)

