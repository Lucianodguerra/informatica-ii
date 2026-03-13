cmake_minimum_required(VERSION 3.16)

project(03_multiplesArch01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(03_multiplesArch01 main.cpp)

include(GNUInstallDirs)
install(TARGETS 03_multiplesArch01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
