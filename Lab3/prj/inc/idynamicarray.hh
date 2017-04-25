#ifndef IDynamicArray_HH
#define IDynamicArray_HH


class IDynamicArray
{
protected:
	virtual int AddNewElement(void* element, int increment) = 0;
	virtual void* GetAnElement(int index) = 0;
	virtual int NumberOfElements() = 0;
	virtual void Print() = 0;
};



#endif
