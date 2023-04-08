#include "gtest/gtest.h"
#include <vector>
#include "net.h"
#include "net_test.h"

TEST(ExampleTests,DemonstrateGTestMacros) {
	std::vector<unsigned>topology{ 3,2,1 };
	net test = net(topology);
	int test1 = net_test::display(test);
	EXPECT_EQ(3, test1);

	std::vector<double> result = std::vector<double>();
	test.feedForward(result);
	EXPECT_EQ(0, result.size());
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}