#ifndef DynamicArray_Test_HH
#define DynamicArray_Test_HH

#include "irunnable.hh"
#include "dynamicarray.hh"


class DynamicArray_Test: IRunnable
{
private:
	DynamicArray dyn_arr;
public:
	virtual void run(int size, int increment = increment_by);
	int NumberOfElements();
};


#endif
