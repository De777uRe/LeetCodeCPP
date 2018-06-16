#include "stdafx.h"
#include "JewelsAndStones.h"


JewelsAndStones::JewelsAndStones()
{
}


JewelsAndStones::~JewelsAndStones()
{
}

int JewelsAndStones::numJewelsInStones(std::string J, std::string S)
{
	int count = 0;

	for (std::string::size_type i = 0; i < J.size(); ++i)
	{
		for (std::string::size_type j = 0; j < S.size(); ++j)
		{
			if (J[i] == S[j])
			{
				count++;
			}
		}
	}

	return count;
}