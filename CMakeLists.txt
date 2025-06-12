cmake_minimum_required(VERSION 3.14)

# Project name
project(OpenGlExamples LANGUAGES CXX)

# CXX version
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add executeable
add_executable(${PROJECT_NAME} "src/main.cpp")

# Find packages
find_package(glfw3 CONFIG REQUIRED)
find_package(GLEW REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE glfw)
target_link_libraries(${PROJECT_NAME} PRIVATE GLEW::GLEW)