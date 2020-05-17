# Find external lib
find_package(Boost 1.7 REQUIRED COMPONENTS date_time)

if(Boost_FOUND)
    message(STATUS "FOUND boost ${Boost_INCLUDE_DIRS}")

    set(Boost_USE_MULTITHREADED TRUE)
    add_executable(starter main.cpp)
    include_directories(${Boost_INCLUDE_DIRS})
    target_link_libraries(starter Boost::date_time)
endif()

