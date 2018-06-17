// LeetCodeCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "JewelsAndStones.h"
#include "UniqueMorseCodeWords.h"

int main()
{
	std::cout << ">>>JEWELS AND STONES<<<" << std::endl;
	JewelsAndStones jewelsAndStones;
	std::cout << "Expecting: 3\n" << "Returning: " << jewelsAndStones.numJewelsInStones("aA", "aAAbbbb") << std::endl;
	std::cout << "Expecting: 0\n" << "Returning: " << jewelsAndStones.numJewelsInStones("z", "ZZ") << std::endl;

	std::cout << std::endl;

	std::cout << ">>>UNIQUE MORSE CODE WORDS<<<" << std::endl;
	UniqueMorseCodeWords uniqueMorseCodeWords;
	std::vector<std::string> words = { "gin", "zen", "gig", "msg" };
	std::cout << "Expecting: 2\n" << "Returning: " << uniqueMorseCodeWords.uniqueMorseRepresentations(words) << std::endl;

    return 0;
}
