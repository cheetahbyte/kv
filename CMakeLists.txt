cmake_minimum_required(VERSION 3.20)

project(kvstore LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(kvstore
    src/main.cpp
    src/commandhandler.cpp
    src/kvstore.cpp
)

target_include_directories(kvstore PRIVATE include)

target_compile_options(kvstore PRIVATE
    -Wall
    -Wextra
    -Wpedantic
)
