cmake_minimum_required(VERSION 3.16)

project(01_flujos_1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(01_flujos_1 main.cpp)

include(GNUInstallDirs)
install(TARGETS 01_flujos_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
