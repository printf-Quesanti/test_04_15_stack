#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int STdatatype;

typedef struct Stack
{
	STdatatype* a;
	int top;
	int capacity;
}ST;

void Stackinit(ST* ps)
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;//或ps->top=-1,意思是top指向栈顶数据；ps->top=0,意思是top指向栈顶数据的后一个。
	ps->capacity = 0;
}

void Stackpush(ST* ps, STdatatype x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STdatatype* tmp = (STdatatype*)realloc(ps->a, sizeof(STdatatype) * newcapacity);
		if (tmp == NULL)
	    {
		printf("realloc fail\n");
		exit(-1);
	    }
		ps->capacity = newcapacity;
		ps->a = tmp;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

void Stacklpop()
{

}

void Stackinit(ST* ps);
void Stackpush(ST* ps, STdatatype x);
void Stackpop(ST* ps);
void Stackdestroy(ST* ps);
STdatatype Stacktop(ST* ps);
bool Stackempty(ST* ps);
int Stacksize(ST* ps);
