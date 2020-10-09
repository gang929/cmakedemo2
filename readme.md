mkdir build
cd build
cmake ..
make
make test

# converage
lcov -c -d . -t Demo -o demo_test.info -b .
genhtml -o cov_result_demo demo_test.info