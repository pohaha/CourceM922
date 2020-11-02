#pragma once
#include "Huector.h"
template <typename T>
class Matrix
{
private :
	unsigned int size = 0;
	Vector<T>* Rows=nullptr;

public:
	Matrix(Vector<T>* n_data, int n_size)
	{
		size = n_size;
		Rows = new Vector<T>[size];
		std::memcpy(Rows, n_data, n_size * sizeof(Vector<T>));
	}
	Matrix()
	{

	}
	Vector<T>& operator[](unsigned int index)
	{
		if (index < size)
			return Rows[index];
		else
		{
			std::cout << "access violation - no such element yet" << std::endl;
			return Rows[0];
		}
	}
};
