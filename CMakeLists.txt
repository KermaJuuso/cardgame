# Created by ChatGPT
cmake_minimum_required(VERSION 3.15)
project(cardgame VERSION 0.1.0 LANGUAGES CXX)

# C++ standard and common settings
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

option(BUILD_SHARED_LIBS "Build libraries as shared" OFF)
option(BUILD_TESTING "Enable tests" ON)

# Collect library sources from src/ if present
file(GLOB_RECURSE CARDGAME_SOURCES
    CONFIGURE_DEPENDS
    "${CMAKE_SOURCE_DIR}/src/*.cpp"
    "${CMAKE_SOURCE_DIR}/src/*.cc"
    "${CMAKE_SOURCE_DIR}/src/*.cxx"
    "${CMAKE_SOURCE_DIR}/src/*.c"
)

if(CARDGAME_SOURCES)
    add_library(cardgame ${CARDGAME_SOURCES})
else()
    # Header-only or placeholder target when no sources exist yet
    add_library(cardgame INTERFACE)
endif()

# Public include directory
target_include_directories(cardgame
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

# Recommended compile features / warnings
target_compile_features(cardgame PUBLIC cxx_std_20)
if(MSVC)
    target_compile_options(cardgame PRIVATE /W4 /permissive-)
else()
    target_compile_options(cardgame PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Optional app target if a main exists at src/main.cpp
if(EXISTS "${CMAKE_SOURCE_DIR}/src/main.cpp")
    add_executable(cardgame-app src/main.cpp)
    target_link_libraries(cardgame-app PRIVATE cardgame)
endif()

# Install/export rules
include(GNUInstallDirs)
install(TARGETS cardgame EXPORT cardgameTargets
    INCLUDES DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
)

install(EXPORT cardgameTargets
    FILE cardgameTargets.cmake
    NAMESPACE cardgame::
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/cmake/cardgame
)

install(DIRECTORY include/ DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

# Tests (if tests/ exists)
if(BUILD_TESTING AND EXISTS "${CMAKE_SOURCE_DIR}/tests")
    enable_testing()
    add_subdirectory(tests)
endif()