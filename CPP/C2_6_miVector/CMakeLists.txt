cmake_minimum_required(VERSION 3.16)

project(C2_6_miVector LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C2_6_miVector main.cpp
    mivector.h mivector.cpp
)

include(GNUInstallDirs)
install(TARGETS C2_6_miVector
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
