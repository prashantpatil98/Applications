#include <iostream>

using namespace std;

int CountCapital(char str[])
{
	int iCnt = 0;
	
	while(*str != '\0')
	{
		if((*str >= 'a') && (*str <= 'z'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	int iRet =0;
	char Arr[20];
	cout<<"Enter String"<<endl;
    
	cin.getline(Arr, 20);
	
	iRet = CountCapital(Arr);
	cout<<"Number of small characters are :"<<iRet<<endl;
	
	return 0;
}
 