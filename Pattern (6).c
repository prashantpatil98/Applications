//i/p row 4 column 4
/*
*	*	*	*
*	*	*	*
*	*	*	*
*	*	*	*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void Display(int iRow , int  iCol)
{
	int i = 0, j = 0;
	for(i = 1; i <= iRow ; i++)
	{
		for(j= 1; j<= iCol; j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
    


int main()
{

	int iValue1 = 0, iValue2 = 0;
	
	printf("Please enter the number of row : \n");
	scanf("%d", &iValue1);
	
	
	printf("Please enter the number of column : \n");
	scanf("%d", &iValue2);
	
	Display(iValue1, iValue2);
	
	return 0;
}
