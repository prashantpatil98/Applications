#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccurance(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;
	
	for(iCnt = iLength-1; iCnt >=0; iCnt--)
	{
		if(Arr[iCnt] == iNo)
		{
			
			break;
			
		}
	}
	return iCnt;

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
	
	iRet = SearchLastOccurance(ptr,iSize, iValue);
	if(iRet == -1)
	{
		printf("There is no such element");
	}
	else
	{
		printf("Element last occured at %d\n", iRet);
	}
	free(ptr);
	
	return 0;
}
