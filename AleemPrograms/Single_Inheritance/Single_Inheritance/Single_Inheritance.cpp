#include "Sample.h"

int main()
{
	Sample obj;
	obj.disp_D();
	obj.disp_S();

	// obj.sum(5,3);?
	cout << "sum = " << obj.sum(5,3) << endl;
	cout << "mul = " << obj.mul(5,3) << endl;
	return 0;
}
