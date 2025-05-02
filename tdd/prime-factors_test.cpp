
#include"gmock/gmock.h"
#include "prime-factors.cpp"

class PrimeFixture : public ::testing::Test {
public:
	PrimeFactors primeFactors;
	vector<int> expected;
};

TEST_F(PrimeFixture, of1) {
	expected = {};
	EXPECT_EQ(expected, primeFactors.of(1));
}

TEST_F(PrimeFixture, of2) {
	expected = {2};
	EXPECT_EQ(expected, primeFactors.of(2));
}

TEST_F(PrimeFixture, of3) {
	expected = { 3 };
	EXPECT_EQ(expected, primeFactors.of(3));
}

TEST_F(PrimeFixture, of4) {
	expected = { 2, 2 };
	EXPECT_EQ(expected, primeFactors.of(4));
}

TEST_F(PrimeFixture, of6) {
	expected = { 2, 3 };
	EXPECT_EQ(expected, primeFactors.of(6));
}

TEST_F(PrimeFixture, of9) {
	expected = { 3, 3 };
	EXPECT_EQ(expected, primeFactors.of(9));
}
TEST_F(PrimeFixture, of12) {
	expected = { 2, 2, 3 };
	EXPECT_EQ(expected, primeFactors.of(12));
}