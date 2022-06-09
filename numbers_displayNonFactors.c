//Accept number from user and display non factors

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
	int iCnt = 0;
	if(iNo < 0)
	{ 
		iNo = -iNo;
	}
	
	for(iCnt = 1; iCnt < iNo ; iCnt++)
	{
		if((iNo % iCnt) != 0)
		{
			printf("%d\n", iCnt);
			
		}
	}
	
}
	

int main()
{
	int iValue = 0;
	
	printf("Enter Number\n");
	scanf("%d", &iValue);
	
	DisplayNonFactors(iValue);
	return 0;
}


//Time complexity : O(N)