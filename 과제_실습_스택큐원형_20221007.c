#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))




bool isnotFull(int *stack, int top, int max)
{
	if(top >= max)
		return true;
	else
		return false;
}


int main()
{
	int *stack = NULL;

	int stackSize = 10;

	int *queue = NULL;

	int i = 0;

	int inElement;

	// 4.1 스택
	printf("4.1 스택");

	stack = (int*)malloc(sizeof(*stack)*stackSize);
	while(1)
	{
		printf("스텍 - 1.push 2.pop : 1");
		scanf("%d", &inElement);

		if( stack[i] < -1 ) break;
		else if( isnotFull
		i++;
	}
}
