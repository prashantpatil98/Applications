#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt = 0;
	
	for(iCnt =1; iCnt <= iNo; iCnt++)
	{
		printf("%d\t", iCnt);
	}
	for(iCnt =iNo; iCnt >= 1; iCnt--)
	{
		printf("%d\t", iCnt);
	}

}
int main()
{

	int iValue = 0;
	printf("Please enter the value : \n");
	scanf("%d", &iValue);
	
	Display(iValue);
	
	return 0;
}