#include <stdio.h>
#include <time.h>

#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))

void perm(char *list, int i, int n)
{
	int j, temp;
	if(i == n)
	{
		for(j = 0; j <= n; j++)
		{
			printf("%c", list[j]);
		}
		printf("	");
	}
	else
	{
		for(j = i; j <= n; j++)
		{
			SWAP(list[i], list[j], temp);
			perm(list, i+1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}

void permForNum(int *list, int i, int n)
{
	int j, temp;
	if(i == n)
	{
		for(j = 0; j <= n; j++)
		{
			printf("%d", list[j]);
		}
		printf("	");
	}
	else
	{
		for(j = i; j <= n; j++)
		{
			SWAP(list[i], list[j], temp);
			permForNum(list, i+1, n);
			SWAP(list[i], list[j], temp);
		}
	}
}


int main()
{
	int i, j;
	char arrChar[][10] = {"GO", "BOY", "GIRL", "GIRLS"};
	int length = 0;
	int arrNum[12] = {};
	int num = 0;
	double duration;
	clock_t start;
	double exetime[10] = {};

	//2.1. 문제
	printf("2.1. 순열 알고리즘 호출\n");
	

	for(i = 0; i < 4; i++)
	{
		for(j = 0; arrChar[i][j] != '\0'; j++)
		{
			length++;
		}
		perm(arrChar[i], 0, length - 1);
		printf("\n");
		length = 0;
	}


	//2.2. 문제 
	printf("2.2. 1부터 n사이의 숫자들을 이용한 순열\n");
	printf("0과 12사이의 값을 입력해주세요\n");
	while(1)
	{
		printf("입력 : ");
		scanf("%d", &num);
		if( num == -1 ) break;
		else if( (num < 0) || (num > 12) ) 
		{
			printf("0과 12사이의 값을 입력해주세요\n");
			continue;
		}
		for(i = 0; i < num; i++)
		{
			arrNum[i] = i;
		}
		start = clock();
		permForNum(arrNum, 0, num - 1);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\n실행 시간 : %f \n", duration);

	}

	//2.3. 문제
	printf("2.3. 순열 원소의 개수를 변화시키면서 실행 시간을 관찰\n");
	for(i = 1; i <= 10; i++)
	{
		for(num = 0; num < i; num++)
		{
			arrNum[num] = num;
		}
		start = clock();
		for(j = 0; j < i; j++)
		{
			permForNum(arrNum, 0, i);
		}
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		exetime[i] = duration;	
		printf("\n");
	}

	printf("\t원소 갯수\t실행 시간\n");
	for(i = 0; i < 10; i++)
	{
		printf("\t%d\t%f\n", i+1, exetime[i]);
	}


	return 0;
}
