cmake_minimum_required(VERSION 3.16)

project(C3_6_returnXref LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C3_6_returnXref main.cpp)

include(GNUInstallDirs)
install(TARGETS C3_6_returnXref
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
