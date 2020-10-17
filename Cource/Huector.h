#pragma once
template < typename T>

class Huector
{
	
private: 
	T* data=nullptr;
	unsigned int size=0;

public:
	void add(T& n_data);

	void show();

	Huector();
};

