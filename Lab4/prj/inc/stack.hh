#ifndef Stack_HH
#define Stack_HH

#include "istack.hh"


class Stack: IStack
{
private:
	//Node sth sth
public:
	Stack();
	~Stack();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void Top();
	virtual void Push();
	virtual void Pop();
};



#endif
