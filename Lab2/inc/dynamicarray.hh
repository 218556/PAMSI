#ifndef DynamicArray_HH
#define DynamicArray_HH

const int increment_by = 100;


class DynamicArray 
{
private:
	int size;					// Size of each space
    int quantity;				// Number of storage spaces
    int next;					// Next empty space
    unsigned char* storage;		// Dynamically allocated array of bytes
    void EnlargeAnArray(int increase);
    void ReduceAnArray(int descrease);
public:
    DynamicArray(int size, int initialquantity = 0);
    ~DynamicArray();
    int AddNewElement(void* element, int increment = increment_by);
    void* GetAnElement(int index);
    int NumberOfElements();
	void Print();
};



#endif
