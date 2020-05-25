#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "Generator.h"
#include <vector>

TEST_CASE("Factorials are computed", "[factorial]") {
	REQUIRE(Factorial(1) == 1);
	REQUIRE(Factorial(2) == 2);
	REQUIRE(Factorial(3) == 6);
	REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Check vector elements", "[vector]") {
	std::vector<std::vector<int>> v;
	v.push_back({ 1,2,3 });
	v.push_back(v[0]);
	

	
	const std::vector<int> vec = { 1, 2, 3 };
	REQUIRE(v[1] == vec);

	//v[0][1] = 0;
	REQUIRE(v[0] == vec);


	REQUIRE(v.size() == 2);

	v.resize(3);
	//v[2].resize(3);
	std::fill(v[2].begin(), v[2].end(), 7);

	const std::vector<int> vec2 = { 7, 7, 7 };
	REQUIRE(v[2] == vec2);
	
	REQUIRE(*std::find(v[1].cbegin(), v[1].cend(), 2) == 2);
	REQUIRE( std::find(v[1].cbegin(), v[1].cend(), 27) == v[1].cend());


}
