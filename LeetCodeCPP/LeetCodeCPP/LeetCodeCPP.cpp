// LeetCodeCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "JewelsAndStones.h"
#include "UniqueMorseCodeWords.h"
#include "FlippingAnImage.h"
#include "HammingDistance.h"

void printFlippedImage(std::vector<std::vector<int>>);

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

	std::cout << std::endl;

	std::cout << ">>>FLIPPING AN IMAGE<<<" << std::endl;
	FlippingAnImage flippingAnImage;
	std::vector<std::vector<int>> imageArrays = { {1, 1, 0},
												  {1, 0, 1},
												  {0, 0, 0} };
	std::vector<std::vector<int>> resultingImage;
	resultingImage = flippingAnImage.flipAndInvertImage(imageArrays);
	std::cout << "Expecting: [1,0,0],[0,1,0],[1,1,1]\n" << "Returning: ";
	printFlippedImage(resultingImage);

	std::cout << std::endl;

	std::cout << ">>>HAMMING DISTANCE<<<" << std::endl;
	HammingDistance hammingDistance;
	std::cout << "Expecting: 2\n" << "Returning: " << hammingDistance.hammingDistance(1, 4);

	std::cout << std::endl;

    return 0;
}

void printFlippedImage(std::vector<std::vector<int>> image)
{
	for (int i = 0; i < image.size(); ++i)
	{
		std::cout << "[";
		for (int j = 0; j < image[i].size(); ++j)
		{
			std::cout << image[i][j];
			if (j != image[i].size() - 1)
			{
				std::cout << ",";
			}
		}
		std::cout << "]";
		if (i != image.size() - 1)
		{
			std::cout << ",";
		}
	}
	std::cout << std::endl;
}