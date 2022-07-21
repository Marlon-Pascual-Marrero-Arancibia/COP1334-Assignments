// This program will determine the batting average of a player.
// The number of hits and at bats are set internally in the program.

// Marlon Pascual Marrero Arancibia

#include <iostream>
using namespace std;

const int AT_BAT = 421;
const int HITS = 123;

int main()
{
	float batAvg;

	batAvg =  (HITS /(float) AT_BAT);								// an assignment statement 
	std::cout << "The batting average is " << batAvg << endl;	// output the result

	return batAvg;
}