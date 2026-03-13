cmake_minimum_required(VERSION 3.16)

project(03_multiplesArch02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(03_multiplesArch02 main.cpp
    producto.cpp
    producto.h)

include(GNUInstallDirs)
install(TARGETS 03_multiplesArch02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
