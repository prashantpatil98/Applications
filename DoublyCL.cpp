#include<iostream>
using namespace std;

struct node
{
	int data;
	struct node * next;
	struct node * prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCL
{
	private:
	PNODE Head;
	PNODE Tail;
	
	public:
	DoublyCL();
	void InsertFirst(int no);
	void InsertLast(int no);
	void InsertAtPos(int pos, int no);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int pos);
	void Display();
	int Count();
};

DoublyCL :: DoublyCL()
{
	Head = NULL;
	Tail = NULL;
}

void DoublyCL :: InsertFirst(int no)
{
	PNODE newn = new NODE;
	newn-> next = NULL;
	newn-> prev = NULL;
	newn -> data = no;
	
	if(Head == NULL && Tail == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		newn -> next = Head;
		newn -> prev = Tail;
		Tail -> next = newn;
		Head -> prev = newn;
		Head = newn;
	}
	
	Tail-> next = Head;
	Head-> prev = Tail;
}

void DoublyCL :: InsertLast(int no)
{
	PNODE temp = Head;
	PNODE newn = new NODE;
	newn-> next = NULL;
	newn-> prev = NULL;
	newn -> data = no;
	
	if(Head == NULL && Tail == NULL)
	{
		Head = newn;
		Tail = newn;
	}
	else
	{
		
		while(temp != Tail)
		{
			temp = temp-> next;
		}
		
		newn-> next = Head;
		newn -> prev = Tail;
		Tail-> next = newn;
		Tail = newn;
		
	}
	
	Tail-> next = Head;
	Head-> prev = Tail;	
}

void DoublyCL :: Display()
{
	PNODE temp = Head;
	if(Head == NULL)
	{
		return;
	}
	do
	{
		cout<<"| "<<temp->data<<" |->";
		temp = temp-> next;
	}while((temp)!= Head);
	
	cout<<endl;
}

int DoublyCL :: Count()
{
	int iCnt = 0;
	PNODE temp = Head;
	if(Head == NULL)
	{
		return 0;
	}
	
	do
	{
		iCnt++;
		temp = temp-> next;
	}while((temp)!= Head);
	
	cout<<endl;	
	
	return iCnt;
}

void DoublyCL :: DeleteFirst()
{
	if(Head == NULL && Tail == NULL)
	{
		return ;
	}
	else if (Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
		
	else
	{
		Head-> next->prev = Tail;
		Head = Head->next;
		delete Tail->next;
		Tail->next = Head;
		
	}
	Tail-> next = Head;
	Head-> prev = Tail;	
}


void DoublyCL :: DeleteLast()
{
	if(Head == NULL && Tail == NULL)
	{
		return ;
	}
	else if (Head == Tail)
	{
		delete Head;
		Head = NULL;
		Tail = NULL;
	}
		
	else
	{
		PNODE temp = Head;
		while(temp->next != Tail)
		{
			temp = temp-> next;
		}
		
		delete temp->next;
		temp->next = Head;
		Head -> prev = temp;
		Tail = temp;
		
	}	
	Tail-> next = Head;
	Head-> prev = Tail;	
}

void DoublyCL:: InsertAtPos(int pos, int no)
{
	int iSize = Count();
	if((pos < 0) || (pos > iSize+2))
	{
		cout<<"Invalid position";
	}
	if(pos == 1)
	{
		InsertFirst(no);
	}
	else if (pos == iSize+1)
	{
		InsertLast(no);
	}
	else
	{
		PNODE temp = Head;
		PNODE newn = new NODE;
		newn-> next = NULL;
		newn-> prev = NULL;
		newn -> data = no;		
		int iCnt = 0;
		
		for(iCnt = 1; iCnt < (pos-1); iCnt++)
		{
			temp = temp->next;
		}
		
		temp->next->prev = newn;
		newn->next = temp->next;
		newn->prev = temp;
		temp->next = newn;
	}
			
}

void DoublyCL:: DeleteAtPos(int pos)
{
	int iSize = Count();
	if((pos < 0) || (pos > iSize+1))
	{
		cout<<"Invalid position";
	}
	if(pos == 1)
	{
		DeleteFirst();
	}
	else if (pos == iSize)
	{
		DeleteLast();
	}
	else
	{
		PNODE temp = Head;
		PNODE temp1 = NULL;
		
		int iCnt = 0;
		
		for(iCnt = 1; iCnt < (pos-1); iCnt++)
		{
			temp = temp->next;
		}
		
		temp1 = temp->next;
		temp->next = temp->next->next;
		delete temp1;
		temp->next->prev = temp;
	}
			
}


int main()
{
	int iRet  = 0;
	int number = 1, iValue = 0, ipos=0;
	DoublyCL obj;
	
	
	cout<<"1. Insert At First"<<endl;
	cout<<"2. Insert At Last"<<endl;
	cout<<"3. Insert At Position"<<endl;
	cout<<"4. Delete First"<<endl;
	cout<<"5. Delete Last"<<endl;
	cout<<"6. Delete At position"<<endl;
	cout<<"7. Display nodes"<<endl;
	cout<<"8. Count All Nodes"<<endl;
	cout<<"9. Termination"<<endl;
	
	while(number != 0)
	{
	cout<<"Enter your choice\n";
	cin>>number;

		
	switch(number){
	case 1:
		cout<<"Enter Value to be enter : ";
		cin>>iValue;
		obj.InsertFirst(iValue);
		cout<<endl;
		break;
		
	case 2:
		cout<<"Enter Value to be enter : ";
		cin>>iValue;
		obj.InsertLast(iValue);
		cout<<endl;
		break;	
	case 3:
		cout<<"Enter Value to be enter : ";
		cin>>iValue;
		cout<<"Enter position  : ";
		cin>>ipos;
		obj.InsertAtPos(ipos, iValue);
		cout<<endl;
		break;	
	case 4:
		obj.DeleteFirst();
		
		break;	
	case 5:
		obj.DeleteLast();
		break;	
	case 6:
		cout<<"Enter  node position to be delete : ";
		cin>>ipos;
		obj.DeleteAtPos(ipos);
		cout<<endl;
		break;	
	case 7:
		obj.Display();
		cout<<endl;
		break;
	case 8:
		iRet = obj.Count();
		cout<<"Number of nodes : "<<iRet;
		cout<<endl;
		break;
	case 9:
		cout<<"Thank you for using Dobly CL";
		return 0;
		break;
		
	default:
		cout<<"please enter proper choice";
		break;
		
	}
	}
	
	
	
	
	/*DoublyCL obj;
	
	obj.InsertFirst(111);
	obj.InsertFirst(101);
	obj.InsertFirst(51);
	obj.InsertFirst(21);
	obj.InsertFirst(11);
	
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;

	obj.InsertLast(151);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;
	
	obj.DeleteFirst();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;
	
	obj.DeleteLast();
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;
	
	
	obj.InsertAtPos(4, 75);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;
	
	obj.DeleteAtPos(4);
	obj.Display();
	iRet = obj.Count();
	cout<<"Number of Nodes "<<iRet<<endl;	*/
	return 0;
}