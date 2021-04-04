cmake_minimum_required(VERSION 3.18.0)
project(Minimal_qt_app)

set(CMAKE_AUTOMOC ON)

# Download automatically, you can also just copy the conan.cmake file
if(NOT EXISTS "${CMAKE_BINARY_DIR}/conan.cmake")
   message(STATUS "Downloading conan.cmake from https://github.com/conan-io/cmake-conan")
   file(DOWNLOAD "https://raw.githubusercontent.com/conan-io/cmake-conan/master/conan.cmake"
                  "${CMAKE_BINARY_DIR}/conan.cmake")
endif()

include(${CMAKE_BINARY_DIR}/conan.cmake)
conan_cmake_run(REQUIRES BASIC_SETUP)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(main main.cpp MainForm.cpp)
target_link_libraries(main ${CONAN_LIBS} Qt5::Core Qt5::Widgets)
