cmake_minimum_required(VERSION 3.16)

project(C3_1_refLvalue LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C3_1_refLvalue main.cpp)

include(GNUInstallDirs)
install(TARGETS C3_1_refLvalue
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
