#include <iostream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include "dynamicarray.hh"
#include "timecounter.hh"
#include "dynamicarray_test.hh"
using namespace std;


int main()
{
	/*
	TimeCounter stoper;
	DynamicArray tablicaint(sizeof(int));
	int n = 100000;
	long pomiary[10];
	ofstream file;
	
	for (int j = 0; j < 10; j++)
	{
		stoper.startClock();
		
	// zwiekszanie tablicy o 1
		for(int i = 0; i < n; i++)
		{
			tablicaint.AddNewElement(&i, increment);
		}
*/
	// dwukrotne zwiekszanie tablicy
		/*
		for(int i = 0; i < 10; i++)
		{
			tablicaint.AddNewElement(&i, tablicaint.NumberOfElements());
		}
		*/
		/*
		stoper.stopClock();
		tablicaint.Print();
		stoper.printElapsedTime();
		pomiary[j]=stoper.getElapsedTime();
	}
	
	file.open("pomiary.csv");
	long srednia=0;
	for(int j=0; j<10; j++)
	{
		file << pomiary[j]/1000.0 << endl;
		srednia += pomiary[j];
	}
	file << srednia/1000.0/10<<endl;
	file.close();
	*/
	
  return 0;
}
