#include <iostream>
#include <sstream>
#include <cstring>
#include <time.h>
#include <sys/time.h>
#include <ctime>
#include <assert.h>
#include "dynamicarray.hh"
#include "timecounter.hh"
#include "dynamicarray_test.hh"
using namespace std;


int main()
{
	TimeCounter stoper;
	DynamicArray_Test tablicaint;
	int number_of_elements = 1000;
	int number_of_iterations = 10;
	ofstream file;
	stringstream s;
    s << number_of_elements ;
	
	
	int increment[] = {10, 100, tablicaint.NumberOfElements()};
	for(int j = 0; j < 3; j++)
	{
		for (int j = 0; j < number_of_iterations; j++)
		{
			stoper.startClock();
			tablicaint.run(number_of_elements, increment[j]);  // dwukrotne zwiekszanie tablicy
			stoper.stopClock();
			stoper.printElapsedTime();
			stoper.writeToFile(s.str());
		}
	}
	
  return 0;
  
}
