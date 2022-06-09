#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[], int iLength,int iNum)
{
    int iCnt = 0, iNoCnt = 0;
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if(Arr[iCnt] == iNum)
		{
			iNoCnt++;
		}
			
	}
	return iNoCnt;
}
int main()
{
	int iSize = 0, iCnt = 0, iRet = 0, iNo = 0;
	int *ptr = NULL;
	
	printf("Enter Number of Elements : \n");
	scanf("%d", &iSize);
	
	ptr = (int*)malloc(iSize*sizeof(int));
	
	printf("Enter the values : ");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d", &ptr[iCnt]);	
	}
	
	printf("Enter Number whose frequency is to be calculated \n")
	scanf("%d", &iNo);
	
	iRet = Frequency(ptr,iSize, iNo);
	printf("Count of %d  is %d \n", iNo, iRet);
	free(ptr);
	
	return 0;
}
