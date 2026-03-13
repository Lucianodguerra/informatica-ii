cmake_minimum_required(VERSION 3.16)

project(listaDoble LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(listaDoble main.cpp
    listadoble.h listadoble.cpp
    nododoble.h nododoble.cpp)

include(GNUInstallDirs)
install(TARGETS listaDoble
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
