#include<iostream>

using namespace std;
class Number
{
	private:
		int iNo;

	public:
	void Accept()
	{
		cout<<"EnterValue :"<<endl;
		cin>>this->iNo;
	}
	
	void Display()
	{
		cout<<"Value is :"<<this->iNo<<endl;
	}
	
	
	int Factorial()
	{
		int iFact = 1;
		int iCnt = 0;
	
		for(iCnt =1; iCnt <= iNo;iCnt++)
		{
			iFact*=iCnt;
		}
	
		return iFact;	

	}
};


int main()
{
	Number nobj;
	
	
	int iRet = 0;
	nobj.Accept();
	nobj.Display();
		
	iRet = nobj.Factorial();
		
	cout<<"Factorial is : "<<iRet<<endl; 
	
	return 0;
}
