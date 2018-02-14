// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MathLibrary.h"
#include <iostream>

using namespace std;
int main(){
	int option;
	cout << "Enter 1 for multiplication, 2 for transpose:";
	cin >> option;
	int matrix1[3][3], matrix2[3][3];
	if (option == 1)
	{


		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "Enter [" << i + 1 << "][" << j + 1 << "] element of First Array: " << endl;
				cin >> matrix1[i][j];
			}
		}

		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "Enter [" << i + 1 << "][" << j + 1 << "] element of Second Array: " << endl;
				cin >> matrix2[i][j];
			}
		}
	}
	else
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				cout << "Enter [" << i + 1 << "][" << j + 1 << "] element of Array: " << endl;
				cin >> matrix1[i][j];
			}
		}

	}

	if (option == 1)
	{
		MathLibrary::Functions::multiplication(matrix1, matrix2);
	}
	else
	{
		MathLibrary::Functions::transpose(matrix1);
	}
	return 0;
}
