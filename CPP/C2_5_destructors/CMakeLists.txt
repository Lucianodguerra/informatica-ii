cmake_minimum_required(VERSION 3.16)

project(C2_destructors_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C2_destructors_2 main.cpp)

include(GNUInstallDirs)
install(TARGETS C2_destructors_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
