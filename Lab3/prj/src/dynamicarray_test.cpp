#include <iostream>
#include "dynamicarray_test.hh"
using namespace std;


void DynamicArray_Test::run(int number_of_elements, int increment)
{
		for(int i = 0; i < number_of_elements; i++)
			{
				dyn_arr.AddNewElement(&i, increment);
			}
}

int DynamicArray_Test::NumberOfElements()
{
	return dyn_arr.NumberOfElements();
}
