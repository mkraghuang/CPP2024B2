#include "Parent.h"
class Child : public Parent
{
private:
	int e,f;
public:
	
	Child(void);
	~Child(void);
	void C(int e,int f);
};