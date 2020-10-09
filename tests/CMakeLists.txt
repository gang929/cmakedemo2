include(GoogleTest)
find_package(GTest REQUIRED)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

add_executable(test_demo test_demo.cpp sometestB.cpp)
target_link_libraries(test_demo PUBLIC
	${GTEST_BOTH_LIBRARIES})

gtest_discover_tests(test_demo EXTRA_ARGS "--gtest_output=xml:test_result.xml")