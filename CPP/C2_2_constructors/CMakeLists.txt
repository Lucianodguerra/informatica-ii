cmake_minimum_required(VERSION 3.16)

project(C2_constructors_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C2_constructors_2 main.cpp
    fecha.h fecha.cpp)

include(GNUInstallDirs)
install(TARGETS C2_constructors_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
