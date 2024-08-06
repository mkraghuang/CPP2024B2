#include <iostream>
#include "Department.h"

int main()
{
	Department dept("CSE", 60, "C++");
	dept.displaydeptdetails();
	dept.updatestrength(80);
	dept.displaydeptdetails();
}

