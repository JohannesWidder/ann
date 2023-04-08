#include <iostream>

#include <vector>
#include "net.h"

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
	std::cout << "hello world" << std::endl;

	std::vector<unsigned> topology= { 3, 2, 1 };
	net testNet = net::net(topology);

	return 0;
}