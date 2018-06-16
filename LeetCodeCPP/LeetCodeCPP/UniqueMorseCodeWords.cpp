#include "stdafx.h"
#include "UniqueMorseCodeWords.h"

#include <iostream>

UniqueMorseCodeWords::UniqueMorseCodeWords()
{
}


UniqueMorseCodeWords::~UniqueMorseCodeWords()
{
}

int UniqueMorseCodeWords::uniqueMorseRepresentations(std::vector<std::string> &words)
{
	std::vector<std::string> morseAlphabet = { ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
	std::unordered_set<std::string> transformations;

	for (std::vector<std::string>::iterator it = words.begin(); it != words.end(); ++it)
	{
		std::stringstream ss;

		for (std::string::size_type i = 0; i < it->size(); ++i)
		{

			// Value of 'a' = 97, so we subtract this value to calculate
			// the index of the array to access for the corresponding
			// morse letter
			ss << morseAlphabet.at(it->at(i) - 97);
		}

		transformations.insert(ss.str());
	}

	return transformations.size();
}
