cmake_minimum_required(VERSION 3.15)

project(cppblueprint CXX)

# -----------------------------------------------------------------------------
# Project configuration options. Clang-tidy verify OR fix. ONLY turn ON either
# ENABLE_CLANG_TIDY or ENABLE_CLANG_TIDY_FIX
option(ENABLE_CLANG_TIDY "Analyze code with clang-tidy." OFF)
option(ENABLE_CLANG_TIDY_FIX "Analyze code with clang-tidy and fix errors." ON)

# -----------------------------------------------------------------------------
# CMake modules and other cmake related (third-party) scripts
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

include(clang-tidy)

add_subdirectory(src)
