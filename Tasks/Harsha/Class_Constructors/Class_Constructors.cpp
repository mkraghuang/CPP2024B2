//system defined headers
#include <iostream>

#include "Department.h"

int main()
{
    Department cse("CSE", 60, "C++");

    cse.updatestrength(80);
    
    Department it = cse;
    it.updatename("IT");
    it.updatestrength(40);

    cse.displaydeptdetails();
    it.displaydeptdetails();
}
