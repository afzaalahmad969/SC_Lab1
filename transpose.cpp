#include "stdafx.h"  
#include "MathLibrary.h"  
#include <iostream>

using namespace std;
namespace MathLibrary
{
	void Functions::transpose(int matrix[3][3]){
		int output[3][3];
		for (int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				output[i][j] = matrix[j][i];
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