#pragma once
#include <cstring>
#include <iostream>

template < typename T>

class Vector
{
	
private: 
	std::size_t size=0;
	T* data=nullptr;

public:

	//this is a method for adding elements to our vector
	void add(const T& n_data)
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

	T& operator[](unsigned int index)
	{
		if (index < size)
			return data[index];
		else
		{
			std::cout << "access violation - no such element yet" << std::endl;
			return data[0];
		}
	}
	
	friend Vector<T> operator+ (Vector<T> &one, Vector<T> &two);
	friend Vector<T> operator* ( Vector <T> &one, const float & )
};

template < typename T>
Vector<T> operator+ (Vector<T> &one, Vector<T> &two)
{
	if (one.size != two.size) {
		std::cout << "Error!" << endl;
		return one;
	}
	for (int i = 0; i < one.size; i++)
	{
		one[i]=one[i] + two[i];
	}
	return one;
};


template < typename T>
Vector<T> operator* (Vector <T>& one, const float& number)
{
	for(int i = 0; i < one.size; i++) {
		one[i]=one[i] * number;
	}
	return one;
};


