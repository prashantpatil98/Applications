
#include<stdio.h>
#include<stdbool.h>

int CountFactor(int iNo)
{ 
	int iCnt = 0;
	int iCount = 0;
	
	for(iCnt =1; (iCnt <= iNo/2); iCnt++)
	{
		if((iNo % iCnt) == 0)
		{
			iCount++;
		}
	}
	return iCount;
}

	
	

int main()
{
	
	int iValue = 0;
	int iRet = 0;
	
	printf("Enter number\n");
	scanf("%d", &iValue);
	iRet = CountFactor(iValue);
	
	printf("Number factors of %d", iRet);
	
	return 0;
}
	
	
	
	