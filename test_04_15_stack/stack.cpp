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

	Stackpop(&st);
	printf("%d\n", Stacktop(&st));
	printf("%d\n", Stacksize(&st));
	printf("%d\n", Stackempty(&st));
	while (!Stackempty(&st))
	{
		printf("%d ", Stacktop(&st));
		Stackpop(&st);
	}
	Stackdestroy(&st);
}


int main()
{
	test1();
	return 0;
}