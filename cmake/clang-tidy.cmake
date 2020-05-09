if(ENABLE_CLANG_TIDY)
    message(STATUS "clang-tidy ENABLED")
    set(CMAKE_CXX_CLANG_TIDY clang-tidy)

elseif(ENABLE_CLANG_TIDY_FIX)
    message(STATUS "clang-tidy with auto-fix ENABLED")
    set(CMAKE_CXX_CLANG_TIDY clang-tidy -fix)

endif()
