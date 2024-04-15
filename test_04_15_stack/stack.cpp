#include"stack.h"

void test1()
{
	ST st;
	Stackinit(&st);
	Stackpush(&st, 1);
	Stackpush(&st, 2);
	Stackpush(&st, 3);
	Stackpush(&st, 4);
	Stackpush(&st, 5);
}


int main()
{
	test1();
	return 0;
}