#include "stdafx.h"
#include "FlippingAnImage.h"


FlippingAnImage::FlippingAnImage()
{
}


FlippingAnImage::~FlippingAnImage()
{
}

std::vector<std::vector<int>> FlippingAnImage::flipAndInvertImage(std::vector<std::vector<int>>& A)
{
	for (int i = 0; i < A.size(); ++i)
	{
		auto end = A[i].size() - 1;
		int j = 0;
		while (j < end)
		{
			int temp = A[i][end];
			A[i][end] = A[i][j];
			A[i][j] = temp;
			j++;
			end--;
		}

		for (int k = 0; k < A[i].size(); ++k)
		{
			A[i][k] ^= 1;
		}
	}

	return A;
}
