cmake_minimum_required(VERSION 3.0)

project(chatserver)

set(CMAKE_cxx_FLAGS ${CMAKE_cxx_FLAGS} -g)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 指定搜索的子目录
add_subdirectory(test)