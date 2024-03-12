cmake_minimum_required(VERSION 3.5)

project(jungklausur LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(jungklausur main.cpp
    circle.h circle.cpp
    graphobj.h graphobj.cpp
    point.h point.cpp
    rectangle.h rectangle.cpp
    scene.h scene.cpp
    application.h application.cpp
    triangle.h triangle.cpp)

include(GNUInstallDirs)
install(TARGETS jungklausur
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
