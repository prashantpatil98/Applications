#include<stdio.h>

typedef unsigned long int ULONG;             //unsigned means only positive number

ULONG Power(int iNo1, int iNo2)
{
	
	ULONG lMult =1; 
	register int iCnt = 0;
	
	for(iCnt = 1; iCnt<= iNo2; iCnt++)
	{
		lMult = lMult * iNo1;
	}
	
	return lMult;
}
int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto ULONG lRet = 0;
	
	printf("Enter base :\n");
	scanf("%d", &iValue1);
	
	printf("Enter power :\n");
	scanf("%d", &iValue2);
	
	
	lRet = Power(iValue1, iValue2);
	
	printf("Result is : %d", lRet);
	
	return 0;
}
	
	