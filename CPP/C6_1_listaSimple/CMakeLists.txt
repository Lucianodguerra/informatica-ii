cmake_minimum_required(VERSION 3.16)

project(listaSimple LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(listaSimple main.cpp
    lista.h lista.cpp
    nodo.h nodo.cpp)

include(GNUInstallDirs)
install(TARGETS listaSimple
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
