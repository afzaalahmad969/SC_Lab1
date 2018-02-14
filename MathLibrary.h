#pragma once  

#ifdef MATHLIBRARY_EXPORTS  
#define MATHLIBRARY_API __declspec(dllexport)   
#else  
#define MATHLIBRARY_API __declspec(dllimport)   
#endif  

namespace MathLibrary
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
		public:
			static MATHLIBRARY_API void multiplication(int matrix1[3][3], int matrix2[3][3]);
			static MATHLIBRARY_API void transpose(int matrix[3][3]);
	};
}