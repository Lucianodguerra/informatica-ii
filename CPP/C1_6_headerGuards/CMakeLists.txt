cmake_minimum_required(VERSION 3.16)

project(C1_headerGuards_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C1_headerGuards_2 main.cpp
    suma.h suma.cpp
    producto.h producto.cpp)

include(GNUInstallDirs)
install(TARGETS C1_headerGuards_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
