project(main_exe)

include_directories(AFTER
    include
)

# FUNCTIONS LIBRARY

add_library(mymath
    math/functions.cpp
)

# MAIN EXECUTABLE

add_executable(main
    main.cpp
)

target_link_libraries(main
    mymath
)

# TESTS

find_package(GTest REQUIRED)

add_executable(test
    test.cpp
)

target_link_libraries(test
    mymath
    GTest::GTest
    GTest::Main
    pthread
)