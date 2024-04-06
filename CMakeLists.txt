cmake_minimum_required(VERSION 3.10)

project(guiapp)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(wxwidgets CONFIG REQUIRED)

add_executable(guiapp src/main.cpp)
set_property(TARGET guiapp PROPERTY CXX_STANDARD 17)

target_link_libraries(guiapp PRIVATE wx::base wx::core)
