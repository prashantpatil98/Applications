//Check weather number is perfect or not

#include<stdio.h>
#include<stdbool.h>

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
		if(iSum > iNo)
		{
			break;
		}
	}
	return iSum;
}

bool CheckPerfect(int iNo)
{
	int iAns = 0;
	iAns = AdditionOfFactors(iNo);
	if(iAns == iNo)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue = 0;
	int iRet = 0; 
	bool bRet = false;
	
	
	printf("Enter Number :");
	scanf("%d", &iValue);
	
	iRet = AdditionOfFactors(iValue);
	
	printf("Addition of factors is %d\n", iRet);
	
	bRet = CheckPerfect(iValue);
	if(bRet == true)
	{
		printf("%d is a perfect number\n", iValue);
	}
	else
	{
		printf("%d is not a perfect number\n", iValue);
	}
	
	return 0;
}

//Time complexity  O(N/2)
	
	