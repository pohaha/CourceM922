#include <iostream>
#include "Huector.h"
#include "MyMath.h"
#include "Function.h"
#include "Matrix.h"
int main()
{
	//function class tests

	//Function test_func(")))))()))))");
	
	
	
	//simple tests for ensuring everything works great
	Vector<float> TestArray;
	std::cout << "created <TestArray> object of class Array" << std::endl;
	float b=10,c=22;
	printf("\n");

	//testing for adding the elements
	TestArray.add(b);
	std::cout << "added: " << b << std::endl;
	printf("\n");

	TestArray.show();
	printf("\n");
	TestArray.add(c);
	std::cout << "added: " << c << std::endl;
	printf("\n");
	TestArray.show();
	printf("\n");

	//testing for manipulating the elements

	{
		float tmp = TestArray[0];
		TestArray[0] = TestArray[1];
		TestArray[1] = tmp;
		TestArray.show();
	}

	//matrix tests
	{
		Vector<float>* Lines = new Vector<float>[3];
		
		Lines[0].add(1);
		Lines[0].add(2);
		Lines[0].add(3);
		
		Lines[1].add(4);
		Lines[1].add(5);
		Lines[1].add(6);

		Lines[2].add(7);
		Lines[2].add(8);
		Lines[2].add(9);
		
		Matrix<float> TestMatrix(Lines,3);
		
		TestMatrix[0].show();
		std::cout<<std::endl;
		std::cout <<"element at index [1][2] is "<< TestMatrix[1][2] << std::endl;
		std::cout << "element at index [2][1] is " << TestMatrix[2][1] << std::endl;
		float tmp = TestMatrix[1][2];
		TestMatrix[1][2] = TestMatrix[2][1];
		TestMatrix[2][1] = tmp;
		std::cout <<
			"After the swap: \n" <<
			"[1][2]: " << TestMatrix[1][2] << std::endl<<
			"[2][2]: " << TestMatrix[2][1] << std::endl;

	}

	//gauss testing
	Gauss(TestArray);


	//iterrations testing


	return 0;
}