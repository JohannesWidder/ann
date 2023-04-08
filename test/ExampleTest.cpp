#include "gtest/gtest.h"
#include <vector>
#include "net.h"

TEST(ExampleTests,DemonstrateGTestMacros) {
	std::vector<unsigned>topology{ 3,2,1 };
	net test = net(topology);

	std::vector<double> result = std::vector<double>();
	test.feedForward(result);
	EXPECT_EQ(4, result.size());
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}