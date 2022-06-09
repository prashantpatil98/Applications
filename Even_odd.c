//Check wheather i/o number is Even OR odd

#include<stdio.h>
#include<stdbool.h>


bool ChkEven(int iNo)
{
	if((iNo % 2) == 0)
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
	
	printf("Enter the Number\n");
	scanf("%d", &iValue);
	
	bRet =ChkEven(iValue);
	if(bRet ==true)
	{
		printf("%d is even number\n", iValue);
	}
	else
	{
		printf("%d is odd number\n", iValue);
	}
	
	return 0;
}