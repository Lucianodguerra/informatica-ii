cmake_minimum_required(VERSION 3.16)

project(2_constructors_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(2_constructors_1 main.cpp
    fecha.h fecha.cpp)

include(GNUInstallDirs)
install(TARGETS 2_constructors_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
