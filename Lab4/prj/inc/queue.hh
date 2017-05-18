#ifndef Queue_HH
#define Queue_HH

#include "iqueue.hh"


class Queue : IQueue
{
private:
	//Node sth sth
public:
	Queue();
	~Queue();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void End();
	virtual void Push();
	virtual void Pop();
};


#endif
