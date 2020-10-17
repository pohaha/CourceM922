#pragma once
class Huector
{
	
private:
	float* data = nullptr;
	unsigned int size=0;

public:
	void add(float& n_data);

	void show();

	Huector();
};

