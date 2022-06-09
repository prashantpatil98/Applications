
#include<stdio.h>

int AdditionOfFactors(int iNo)
{
	int iCnt = 0;
	int iSum = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt <= iNo/2; iCnt ++)
	{
		if((iNo % iCnt) == 0)
		{
			iSum = iSum + iCnt;
			
		}
	}
	return iSum;
}
int main()
{
	int iValue = 0;
	int iRet = 0; 
	
	printf("Enter Number");
	scanf("%d", &iValue);
	
	iRet = AdditionOfFactors(iValue);
	
	printf("Addition of factors is %d", iRet);
	
	return 0;
}

//Time complexity  O(N/2)
	
	