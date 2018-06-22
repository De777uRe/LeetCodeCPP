#include "stdafx.h"
#include "HammingDistance.h"

#include <bitset>

HammingDistance::HammingDistance()
{
}


HammingDistance::~HammingDistance()
{
}

int HammingDistance::hammingDistance(int x, int y)
{
	std::bitset<32> resultBits = std::bitset<32>(x) ^ std::bitset<32>(y);

	return resultBits.count();
}
