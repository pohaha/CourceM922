#pragma once
#include <cstring>
#include <iostream>

template < typename T>
class Huector
{
	
private: 
	std::size_t size=0;

public:
	T* data=nullptr;
	void add(T& n_data)
	{
		T* temp = new T[size + 1];
		std::memcpy(temp, data, std::size_t(size));
		size = size + 1;
		delete[] data;
		data = new T[size];
		std::memcpy(data, temp, std::size_t(size));
		data[size - 1] = n_data;
		delete[] temp;
	}

	void show()
	{
		for (int i = 0; i < size; i++)
		{
			std::cout << "Element number " << i+1 << " : " << data[i] << std::endl;
		}
	}

	Huector()
	{

	}
};


