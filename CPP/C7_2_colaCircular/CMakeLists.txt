cmake_minimum_required(VERSION 3.5)

project(C7_2_colaCircular LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C7_2_colaCircular main.cpp
    circqueue.h circqueue.cpp)

include(GNUInstallDirs)
install(TARGETS C7_2_colaCircular
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
