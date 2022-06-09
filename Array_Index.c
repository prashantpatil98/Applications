#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirst(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNo)
		{
			
			break;
			
		}
	}
	if(iCnt == iLength)
	{
		return -1;
	}
	else
	{
		return iCnt;
	}
	
		
}
int main()
{
	int iSize = 0, iCnt = 0,  iValue = 0;
	int iRet = 0;
	int *ptr = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d", &iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the values : ");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);	
	}
	
	printf("Enter element to search :\n");
	scanf("%d", &iValue);
	
	iRet = SearchFirst(ptr,iSize, iValue);
	printf("Index of searched element is %d\n", iRet );
	
	return 0;
}
