cmake_minimum_required(VERSION 3.16)

project(C3_2_tranfXdir LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C3_2_tranfXdir main.cpp)

include(GNUInstallDirs)
install(TARGETS C3_2_tranfXdir
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
