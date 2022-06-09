#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
	int iCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((Arr[iCnt] % 2) == 0)
		{
			printf("even Numbers : %d\n", Arr[iCnt]);
		}
	}
}
int main()
{
	int iSize = 0, iCnt = 0;
	int *ptr = NULL;
	
	printf("Enter Number pf Elements : \n");
	scanf("%d", &iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the values : ");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);	
	}

	DisplayEven(ptr, iSize);
	free(ptr);
	
	return 0;
}
