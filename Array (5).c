#include<stdio.h>

void Display(int ptr[])
{
	register int iCnt = 0;
	printf("Elements of Array are : \n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
		printf("%d\n", *(ptr+iCnt));
		
	}
	
}
int main()
{
	auto int Arr[5];
	register int iCnt = 0;
	
	printf("Enter elements : \n");
	
	for(iCnt = 0; iCnt < 5; iCnt++)
	{
	scanf("%d", &Arr[iCnt]);
	}
	
	Display(Arr);
	return 0;
}