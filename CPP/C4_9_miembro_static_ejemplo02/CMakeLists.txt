cmake_minimum_required(VERSION 3.5)

project(C4_9_miembro_static_ejemplo02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C4_9_miembro_static_ejemplo02 main.cpp)

include(GNUInstallDirs)
install(TARGETS C4_9_miembro_static_ejemplo02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
