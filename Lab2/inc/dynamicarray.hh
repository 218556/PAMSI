#ifndef DynamicArray_HH
#define DynamicArray_HH

class DynamicArray
{
	private:
		void PowiekszTablice();
		void PomniejszTablice();
		void AktualnyStan();
	public:
		DynamicArray();
		~DynamicArray();
		void AddNewElement();
		void Display();
	
};

#endif
