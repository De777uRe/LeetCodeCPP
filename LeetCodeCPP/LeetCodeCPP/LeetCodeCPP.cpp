// LeetCodeCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "JewelsAndStones.h"

int main()
{
	std::cout << ">>>JEWELS AND STONES<<<" << std::endl;
	JewelsAndStones jewelsAndStones;
	std::cout << jewelsAndStones.numJewelsInStones("aA", "aAAbbbb") << std::endl;
	std::cout << jewelsAndStones.numJewelsInStones("z", "ZZ") << std::endl;

    return 0;
}

