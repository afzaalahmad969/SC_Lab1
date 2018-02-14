#include "stdafx.h"  
#include "MathLibrary.h"  
#include <iostream>

using namespace std;
namespace MathLibrary
{
	void Functions::multiplication(int matrix1[3][3], int matrix2[3][3])
	{
		int output[3][3];
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				output[i][j] = 0;
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				for (int k = 0; k < 3; k++)
				{
					output[i][j] += matrix1[i][k] * matrix2[k][j];
				}
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "  " << output[i][j];
			}
			cout << endl;
		}
	}
}