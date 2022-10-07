#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))


void sort(int list[], int n)
{
	int i, j, min, temp;
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for ( j = i +1; j < n; j++)
		{
			if (list [j] < list[min])
			{
				min=j;
			}
			SWAP(list[i], list[min], temp);
		}
	}
}

int is_sorted(int A[], int n)
{
	int i;

	for(i = 0; i < (n - 1); i++);
	{
		if(!(A[i] <= A[i+1]))	return 0; // 정렬 안됨 0리턴 
	}

	
	return 1; // 정렬 확인 1리턴 
}

void putDisorderArr(int arr[], int arrSize)
{
	int i = 0;
	for(i = 0; i < arrSize; i++)
	{
		arr[i] = arrSize - i; 
	}

}

int compare(int x, int y)
{
	if( x < y ) return -1;
	else if ( x == y ) return 0;
		else return 1;
}

typedef struct _BinMidCounter
{
	int middle;
	int counter;
}values;

values binsearch(int list[], int searchnum, int left, int right)
{
	values mc;
	mc.counter = 0;

	while (left <= right)
	{
		mc.middle = ( left + right ) / 2;
		switch ( compare(list[mc.middle], searchnum) )
		{
			case -1: left = mc.middle + 1;
				break;
			case 0 : return mc;
			case 1 : right = mc.middle - 1;
		}
		mc.counter++;
	}
	mc.middle = -1;
	return mc;
}


int main()
{
	int A[100000];
	int B[50000];
	int arrSize;

	int i;

	int input;
	double duration;
	clock_t start;
	values mc;

	srand((int)time(NULL));


	

	//문제 1.1.
	printf("1.1 무작위 100,000개의 정수 생성 및 정렬, 정렬 검사 수행\n");

	//문제 1.1.1.
	printf("1.1.1. 배열 A에 100,000개의 정수를 무작위로 생성하여 저장\n");


	for(i = 0; i < 100000; i++)
	{
		A[i] = rand() % 100000 + 1;
	}

	for(i = 0; i < 300; i++)
	{
		printf("%d \t", A[i]);
	}

	printf("완료\n");


	//문제 1.1.2.
	printf("1.1.2. 배열 A에 무작위로 저장된 정수를 정렬\n");

	sort(A, 100000);

	for(i = 0; i < 100000; i++)
	{
		printf("%d \t", A[i]);
	}
	printf("완료\n");

	

	//문제 1.1.3.
	printf("1.1.3. 배열 A에 정렬된 정렬 상태 확인\n");
	
	if(is_sorted(A,100000))
	{
		printf("정렬 완료\n");
	}
	else
	{
		printf("정렬 실패\n");
	}


	//문제 1.2
	printf("1.2. 배열의 크기를 100부터 1,000,000까지 바꾸면서 sort 함수의 실행 시간 측정\n");

	printf("\tn\t시간\t정렬상태\n");

	arrSize = 0;
	
	int* arr = (int*)malloc(sizeof(int) * arrSize);
	putDisorderArr(arr, arrSize);	//역순 배열 함수
	
	start = clock();
	sort(arr, arrSize);
	duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
	printf("\t%d\t%f", arrSize, duration);
	if (is_sorted(arr, arrSize))	printf("\t정렬됨\n");
	else	printf("\t정렬안됨\n");
	free(arr);

	for(i = 0; i < 10; i++)
	{

		arrSize += 10;	
		int* arr = (int*)malloc(sizeof(int) * arrSize);
	
		putDisorderArr(arr, arrSize);

		start = clock();
		sort(arr, arrSize);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\t%d\t%f", arrSize, duration);
		if(is_sorted(arr, arrSize))	printf("\t정렬됨\n");
		else	printf("\t정렬안됨\n");
		free(arr);

	}
	
	for(i = 0; i < 9; i++)
	{
		arrSize += 100;
		int* arr = (int*)malloc(sizeof(int) * arrSize);

		putDisorderArr(arr, arrSize);

		start = clock();
		sort(arr, arrSize);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\t%d\t%f", arrSize, duration);
		if(is_sorted(arr, arrSize))	printf("\t정렬됨\n");
		else	printf("\t정렬안됨\n");
		free(arr);

	}

	for(i = 0; i < 9; i++)
	{
		arrSize += 1000;
		int* arr = (int*)malloc(sizeof(int) * arrSize);

		putDisorderArr(arr, arrSize);

		start = clock();
		sort(arr, arrSize);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\t%d\t%f", arrSize, duration);
		if(is_sorted(arr, arrSize))	printf("\t정렬됨\n");
		else	printf("\t정렬안됨\n");
		free(arr);

	}

	for(i = 0; i < 9; i++)
	{
		arrSize += 10000;
		int* arr = (int*)malloc(sizeof(int) * arrSize);

		putDisorderArr(arr, arrSize);
		
		start = clock();
		sort(arr, arrSize);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\t%d\t%f", arrSize, duration);
		if (is_sorted(arr, arrSize))	printf("\t정렬됨\n");
		else	printf("\t정렬안됨\n");
		free(arr);

	
	}

	for(i = 0; i < 9; i++)
	{
		arrSize += 100000;
		int* arr = (int*)malloc(sizeof(int) * arrSize);
		
		putDisorderArr(arr, arrSize);
		
		start = clock();
		sort(arr, arrSize);
		duration = ((double) (clock() - start)) / CLOCKS_PER_SEC;
		printf("\t%d\t%f", arrSize, duration);
		if (is_sorted(arr, arrSize))	printf("\t정렬됨\n");
		else	printf("\t정렬안됨\n");
		free(arr);

	}

	

	//문제 1.3
	printf("1.3. 100,000개의 정수를 무작위로 생성하여 정렬 후 이진검색 수행\n");
	//문제 1.3.1.
	printf("1.3.1 배열에 100,000개의 정수를 무작위로 생성하여 저장\n");
	
	for(i = 0; i < 100000 - 1; i++)
	{
		A[i] = rand() % 100000 + 1;
	}
	printf("완료\n");

	//문제 1.3.2.
	printf("1.3.2. 배열에 무작위로 저장된 정수 정렬\n");
	sort(A, 100000);
	printf("완료\n");

	//문제 1.3.3.
	printf("1.3.3. 배열에 정렬된 정수의 정렬 상태 확인");
	if(is_sorted(A, 100000)) printf("정렬 완료\n");
	else	printf("정렬 실패\n");

	//검색 시작
	while(1)
	{
		printf("검색 데이터(1 ~ 100000) : ");
		scanf("%d" , &input);

		if( input == -1 ) break;
		if( (input <= 0) || (input > 100000) )	printf(" 1 ~ 100000 사이의 값을 입력하세요\n");

		mc = binsearch(A,input, 0, 100000 - 1);
		
		if( mc.middle == -1 ) printf("검색 실패\n");
		else	printf("검색 데이터 : %d, counter : %d ", input, mc.counter);
	
	}
	printf("검색 종료\n");
	
	//문제 1.4.
	printf("1.4. 배열의 크기를 변화시키면서 counter의 값을 관찰\n");
	//문제 1.4.1.
	printf("1.4.1. 배열에 100,000개의 정수를 역순으로 생성하여 저장\n");
	
	putDisorderArr(A, 100000);

	printf("완료\n");

	//문제 1.4.2.
	printf("1.4.2. 배열에 역순으로 저장된 정수 정렬\n");
	sort(A, 100000);
	printf("완료\n");

	//문제 1.4.3.
	printf("1.4.3. 배열에 정렬된 정수의 정렬 상태 확인");
	if(is_sorted(A, 100000)) printf("정렬 완료\n");
	else	printf("정렬 실패\n");

	//검색 시작
	while(1)
	{
		printf("검색 데이터(1 ~ 100000) : ");
		scanf("%d" , &input);

		if( input == -1 ) break;
		if( (input <= 0) || (input > 100000) )	printf(" 1 ~ 100000 사이의 값을 입력하세요\n");

		mc = binsearch(A,input, 0, 100000 - 1);
		
		if( mc.middle == -1 ) printf("검색 실패\n");
		else	printf("검색 데이터 : %d, counter : %d \n", input, mc.counter);
	
	}
	printf("검색 종료\n");
	
	//문제 1.4.4.
	printf("1.4.4. 배열에 50,000개의 정수를 역순으로 생성하여 저장\n");
	
	putDisorderArr(B, 50000);

	printf("완료\n");

	//문제 1.4.5.
	printf("1.4.5. 배열에 역순으로 저장된 정수 정렬\n");
	sort(B, 50000);
	printf("완료\n");

	//문제 1.4.6.
	printf("1.4.6. 배열에 정렬된 정수의 정렬 상태 확인");
	if(is_sorted(B, 50000)) printf("정렬 완료\n");
	else	printf("정렬 실패\n");

	//검색 시작
	while(1)
	{
		printf("검색 데이터(1 ~ 50000) : ");
		scanf("%d" , &input);

		if( input == -1 ) break;
		if( (input <= 0) || (input > 50000) )	printf(" 1 ~ 100000 사이의 값을 입력하세요\n");

		mc = binsearch(B,input, 0, 50000 - 1);
		
		if( mc.middle == -1 ) printf("검색 실패\n");
		else	printf("검색 데이터 : %d, counter : %d \n", input, mc.counter);
	
	}
	printf("검색 종료\n");
	
	return 0;
}
