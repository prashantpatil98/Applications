#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int iNo)
{
    int iCnt =0;
	for (iCnt = (0-iNo); iCnt <= iNo; iCnt++)
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
