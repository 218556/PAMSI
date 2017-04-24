#ifndef ITimeCounter_HH
#define ITimeCounter_HH

#include<string>
using namespace std;

class ITimeCounter
{
	protected:
		virtual void startClock() = 0;
		virtual void stopClock() = 0;
		virtual long getElapsedTime() = 0;	
		virtual void printElapsedTime() = 0;
		virtual void writeToFile(string filename) = 0;
};

#endif
