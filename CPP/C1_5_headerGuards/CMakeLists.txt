cmake_minimum_required(VERSION 3.16)

project(C1_headerGuards_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C1_headerGuards_1 main.cpp
    suma.cpp
    suma.h
    producto.cpp
    producto.h)

include(GNUInstallDirs)
install(TARGETS C1_headerGuards_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
