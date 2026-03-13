cmake_minimum_required(VERSION 3.5)

project(C4_14_ejemploATM LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(C4_14_ejemploATM main.cpp
    bankaccount.h bankaccount.cpp
    atm.h atm.cpp


)

include(GNUInstallDirs)
install(TARGETS C4_14_ejemploATM
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
