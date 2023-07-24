message(STATUS "UT Test Part = ${PROJECT_SOURCE_DIR}")

# internal dirs
include_directories(
    ${PROJECT_SOURCE_DIR}/src
)

# CTest
enable_testing()

add_executable(
    hello_test
    hello_test.cc
    sqrt_test.cc
    test.cpp
)

target_link_libraries(
    hello_test
    $<TARGET_OBJECTS:myproject>
    gtest
    gtest_main
)

target_link_libraries(
    hello_test
    pthread)

if (NOT DEFINED TESTCASES OR TESTCASES STREQUAL "")
    set(TESTCASES "*")
endif()
message(STATUS "Testcases filter: ${TESTCASES}")

add_test(
    NAME hello_test
    COMMAND hello_test
                --gtest_output=xml:ut.xml
                --gtest_filter=${TESTCASES}
    )

set_tests_properties(hello_test PROPERTIES LABELS UT)
add_custom_target(
    run_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --force-new-ctest-process -E memcheck -L "UT"
    DEPENDS hello_test
)
