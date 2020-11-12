#pragma once
#include "Huector.h"
#include "Matrix.h"

template <typename T>
Vector<T>* Gauss(Matrix<T>& input_matrix)
{
	float m;
	Vector<T>* output_vector = new Vector<T> ;

	for (int k = 1; k < output_vector.size; k++)
	{
		for (int j = k; j < output_vector.size; j++)
		{
			m = input_matrix[j][k - 1] / input_matrix[k - 1][k - 1];
			input_matrix[j] = input_matrix[j] + (-1) * m * input_matrix[k - 1];
		}
	}
	for (int i = output_vector.size - 1; i >= 0; i--)
	{
		output_vector[i] = input_matrix[i][output_vector.size] / input_matrix[i][i];
		for (int c = output_vector.size - 1; c > i; c--)
		{
			output_vector[i] = output_vector[i] - input_matrix[i][c] * output_vector[c] / input_matrix[i][i];
		}
	}

	return output_vector ;
}


template <typename T>
Vector<T> iterrationMethod(Vector<T>& data)
{
	
}

