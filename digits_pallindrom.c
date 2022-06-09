#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrom(int iNo)
{
	int iDigit = 0;
	int iRev = 0;
	int iTemp = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	iTemp = iNo;
	
	while(iNo > 0)
	{
		iDigit =iNo % 10;
		iRev = iRev * 10 + iDigit;
		
		iNo = iNo / 10;
	}
	
	if(iTemp == iRev)
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
	bool bRet = false;
	printf("Enter number\n");
	scanf("%d", &iValue);
	
	bRet = CheckPallindrom(iValue);
	if(bRet == true)
	{
		printf("%d is Pallindrom number", iValue);
	}
	else
	{
		printf("%d is not Pallindrom number", iValue);
	}
	
	
	return 0;
}