#ifndef DynamicArray_HH
#define DynamicArray_HH

#include "idynamicarray.hh"

const int increment_by = 100;

class DynamicArray: IDynamicArray
{
private:
	int size;					// Size of each space
    int quantity;				// Number of storage spaces
    int next;					// Next empty space
    unsigned char* storage;		// Dynamically allocated array of bytes
    void EnlargeAnArray(int increase);
public:
	DynamicArray();
    DynamicArray(int size, int initialquantity = 0);
    ~DynamicArray();
    virtual int AddNewElement(void* element, int increment = increment_by);
    virtual void* GetAnElement(int index);
    virtual int NumberOfElements();
	virtual void Print();
};



#endif
