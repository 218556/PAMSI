#ifndef List_HH
#define List_HH

#include "ilist.hh"

class List: IList
{
private:
	//Node sth sth
public:
	List();
	~List();
	virtual void Add(int element);
	virtual int Find(int *element);
	virtual void* Get(int element);
	virtual int Size();
	virtual void Next();
	virtual void Prev();
};


#endif
