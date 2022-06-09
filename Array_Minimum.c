#include<stdio.h>
#include<stdlib.h>

//for minimum numbers
int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(iMin > Arr[iCnt])
		{
			iMin = Arr[iCnt];
		}
			
	}
	return iMin;
}
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0;
	int *ptr = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d", &iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the values : ");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);	
	}

	iRet = Minimum(ptr,iSize);
	printf("Minimum number is %d \n", iRet);
	free(ptr);
	
	return 0;
}
