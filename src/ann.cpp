#include <iostream>

#include "test_lib.h"

using namespace std;

/**
 * @file ann.cpp
 * @brief definition of coroutine implementing functions.
 * <a href="ann.md" target="_blank"><b>My external page</b></a>
 * 
 * @date 6.4.2023
 * @author Johannes Widder
 *
 * @defgroup ANN "Testsource"
 *

 */
int main() {
	cout << "hello world" << endl;
	test_lib test = test_lib();

	test.foo();

	return 0;
}