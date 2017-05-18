#ifndef IStack_HH
#define IStack_HH

/*!
* \file
* \brief Definicja interfejsu IStack
*
* Plik zawiera definicję interfejsu IStack, który
* dziedziczy po IContainer.
*/

#include "icontainer.hh"


/*!
* \brief Modeluje pojęcie stosu.
*/
class IStack : public IContainer
{

public:
	virtual void Add(int element) = 0;
	virtual int Find(int *element) = 0;
	virtual void* Get(int element) = 0;
	virtual int Size() = 0;
	
	virtual void Top() = 0;
	virtual void Push() = 0;
	virtual void Pop() = 0;
};


#endif
