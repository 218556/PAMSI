#ifndef DynamicArray_Test_HH
#define DynamicArray_Test_HH

#include "irunnable.hh"
#include "dynamicarray.hh"

class DynamicArray_Test: IRunnable
{
private:
	DynamicArray dyn_arr;
public:
	virtual void prepare(int size);
	virtual void run();
};



#endif
