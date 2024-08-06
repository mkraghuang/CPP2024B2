#include "Demo.h"

class Sample:public Demo
{
public:
	int a, b, c;
	Sample();
   ~Sample();
	void disp_S();
	int sum(int x, int y);
};

