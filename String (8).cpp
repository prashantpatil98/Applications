#include <iostream>

using namespace std;

int strlenX(char *str)
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if((*str == 'l' )|| (*str == 'L'))
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
	
	iRet = strlenX(Arr);
	cout<<"Count of L  is :"<<iRet<<endl;
	
	return 0;
}
 