#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ProblemSolver.h"
#include <vector>


TEST_CASE("Check file reading", "") {
	ProblemSolver s;
	s.ReadFile("input.txt");
	REQUIRE(s.GetN() == 3);

	//REQUIRE(s.items[2].W == 2);

}
