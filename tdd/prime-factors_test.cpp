
#include"gmock/gmock.h"
#include "prime-factors.cpp"


TEST(PrimeFactors, of1) {
	PrimeFactors primeFactors;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactors.of(1));
}
