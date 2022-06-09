//program to display 5 times Hello on screen

#include<stdio.h>

void Display(int iNo)            //Defination
{
		int iCnt =0 ;
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		 for(iCnt=0 ; iCnt<iNo ; iCnt++)
		 {
			 printf("Hello\n");
		 }
}

int main()
{
	int iValue = 0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	Display(iValue);             //Function call
	
	return 0;
}

