cmake_minimum_required(VERSION 3.16)

project(C3_8_refConSobrecarga LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C3_8_refConSobrecarga main.cpp)

include(GNUInstallDirs)
install(TARGETS C3_8_refConSobrecarga
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
