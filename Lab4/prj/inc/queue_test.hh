#ifndef Queue_Test_HH
#define Queue_Test_HH

#include "queue.hh"
#include "irunnable.hh"

class Queue_Test: IRunnable
{
protected:
	Queue kolejka;
public:
	virtual void run(int number_of_elements);
	int NumberOfElements();
};


#endif
