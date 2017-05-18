#ifndef TimeCounter_HH
#define TimeCounter_HH


#include "itimecounter.hh"

#include <sys/time.h>
#include <fstream>
#include <iostream>
#include <string>


class TimeCounter: ITimeCounter
{
	private:
		long start;
		long stop;
	public:
		virtual void startClock();
		virtual void stopClock();
		virtual long getElapsedTime();	
		virtual void printElapsedTime();
		virtual void writeToFile(string filename);
};

#endif
