#ifndef IRunnable_HH
#define IRunnable_HH

class IRunnable
{
protected:
virtual void prepare(int size) = 0;
virtual void run() = 0;
};




#endif
