enable_testing()

include_directories(../include)
include_directories(.)
include_directories(../gtest-1.7.0/include)

set(unittest_helper unittest_util.cpp)

macro(add_gtest test_source test_name)
    add_executable(${test_name} ${test_source} ${unittest_helper})
    target_link_libraries(${test_name} gtest gtest_main)
    target_link_libraries(${test_name} cpp53)
    add_test(${test_name} bin/${test_name})
endmacro(add_gtest)


add_gtest(name_test.cpp name_test)
