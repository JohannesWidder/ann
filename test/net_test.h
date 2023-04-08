#include <iostream>

#include <format>

#include "net.h"

class net_test {
public:
	static int display(net test)
	{
		std::cout << std::format("{}",test.m_layers.size()) << std::endl;
		return test.m_layers.size();
	};
};