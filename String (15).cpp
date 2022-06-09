#include <iostream>

using namespace std;

int strlwrX(char str[])
{
	
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
			{
				*str = *str + 32;
			}
		str++;
	}
	
}

int main()
{
	int iRet =0;
	char Arr[20];
	cout<<"Enter String"<<endl;
    
	cin.getline(Arr, 20);
	
	strlwrX(Arr);
	cout<<"String in lower case :"<<Arr<<endl;
	
	return 0;
}
 