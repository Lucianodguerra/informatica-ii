cmake_minimum_required(VERSION 3.5)

project(C4_8_miembro_static_ejemplo01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C4_8_miembro_static_ejemplo01 main.cpp)

include(GNUInstallDirs)
install(TARGETS C4_8_miembro_static_ejemplo01
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
