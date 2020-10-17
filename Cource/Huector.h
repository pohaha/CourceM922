#pragma once
#include <cstring>
#include <iostream>

template < typename T>
class Vector
{
	
private: 
	std::size_t size=0;

public:
	T* data=nullptr;

	//this is a method for adding elements to our vector
	void add(T& n_data)
	{
		T* temp = new T[size + 1];
		
		std::memcpy(temp, data, sizeof(T)*size);
		delete[] data;
		
		data = temp;
		data[size++] = n_data;
	}


	//this is a method for showing all contained elements
	void show()
	{
		std::cout << "array contents are: " << std::endl;
		for (int i = 0; i < size; i++)		std::cout << "Element number " << i+1 << " : " << data[i] << std::endl;
		
	}

	Vector()
	{

	}
};


