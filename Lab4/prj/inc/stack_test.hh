#ifndef Stack_Test_HH
#define Stack_Test_HH

#include "stack.hh"
#include "irunnable.hh"

class Stack_Test: IRunnable
{
protected:
	Stack stos;
public:
	virtual void run(int number_of_elements);
	int NumberOfElements();
};


#endif
