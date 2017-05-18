#ifndef List_Test_HH
#define List_Test_HH

#include "list.hh"
#include "irunnable.hh"

class List_Test: IRunnable
{
protected:
	List lista;
public:
	virtual void run(int number_of_elements);
	int NumberOfElements();
};


#endif
