#include"gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, PrimeTest) {
	EXPECT_EQ(1, 1);// test
	EXPECT_EQ(1, 1);// test
	EXPECT_EQ(1, 1);// test
	EXPECT_EQ(1, 1);// test
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}