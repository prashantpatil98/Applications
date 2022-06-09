#include <iostream>

using namespace std;

int strtoggleX(char str[])
{
	
	
	while(*str != '\0')
	{
		if((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if ((*str >= 'a') && (*str <= 'z'))
		{
			*str = *str - 32;
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
	
	strtoggleX(Arr);
	cout<<"String in lower case :"<<Arr<<endl;
	
	return 0;
}
 