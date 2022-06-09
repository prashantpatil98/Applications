#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
	
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, int no)
{
   //Allocate memory for node
   //Intialize that node
   
   //check LL is empty or not
   //if LL is empty, then new node is first node so update its address in first pointer through head
   
   //if LL is not empty the store the address of first node in the next pointer of our new node
	//update first pointer through head
	
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn-> data = no;
	newn-> next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{
		newn->next = *head ;
		*head = newn;
	}
}

void InsertLast(PPNODE head, int no)
{
   //Allocate memory for node
   //Intialize that node
   
   //check LL is empty or not
   //if LL is empty, then new node is first node so update its address in first pointer through head
   
   //if LL is not empty 
   //travel till last node of LL
   // store address of new node in the next pointer of last node
	
	PNODE temp = NULL;
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	
	newn-> data = no;
	newn-> next = NULL;
	
	if(*head == NULL)
	{
		*head = newn;
	}
	else
	{ 
		//travel till last node
		//store address of new node in thr next pointer of last node
		temp = *head;
		
		while(temp-> next !=NULL)
		{
			temp = temp->next;
		}
		temp->next = newn;
	}
}

void Display(PNODE head)
{
	printf("elements from linkedlist are :\n");
	
		while(head != NULL)
		{
			printf("| %d  |->", head->data);
			head = head->next;
		}
		printf("NULL\n");
}

int Count(PNODE head)
{
	int iCnt = 0;
	
		while(head != NULL)
		{
			iCnt++;
			head = head->next;
		}
	return iCnt;
}

void DeleteFirst(PPNODE head)
{
	//If LL is empty then return
	//If LL contains at least one node then store node in the first pointer through head
	//and delete the first node
	PNODE temp = NULL;

	
	if(*head == NULL)
	{
		return;
	}
	
	else 
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
		
}	


void DeleteLast(PPNODE head)
{
	//If LL is empty then return 
	//If LL contains one node then delete that node and return
	//If LL contains more than one node then travel till second last
	
	PNODE temp = NULL; 
	if(*head == NULL)
	{
		return;
	}
	else if((*head) -> next == NULL)
	{
		free(*head);
		*head =NULL;               //Most imp
	}
	else
	{
		temp = *head;
		while(temp-> next ->next != NULL)
		{
			temp = temp->next;
		}
		free(temp->next);
		temp->next = NULL;
	}
}


void InsertAtPos(PPNODE head, int no, int pos)
{
	//If position is invalid then return directly
	//if position is 1 then call insertfirst
	//if position is N+1 then call insertlast
	
	int size = 0, iCnt = 0;
	PNODE newn = NULL;
	PNODE temp = NULL;
	size = Count(*head);
	
	if((pos <1 ) || (pos > (size +1)))
	{
		printf("Position is invalid\n");
		return;
	}
	
	if(pos == 1)
	{
		InsertFirst(head, no);
	}
	else if(pos == (size +1))
	{
		InsertLast(head, no);
	}
	else       //At position
	{
		
		PNODE newn = NULL;
		newn = (PNODE)malloc(sizeof(NODE));
	
		newn-> data = no;
		newn-> next = NULL;
		
		temp = *head;
		for(iCnt =1; iCnt < pos-1;iCnt++)
		{
			temp = temp->next;
		}
		newn->next=temp->next;
		temp->next = newn;
	}
}
int main()
{
	int iRet = 0;
	PNODE first = NULL;
	
	InsertFirst(&first, 101);  //call by address
	InsertFirst(&first, 51);
	InsertFirst(&first, 21);
	InsertFirst(&first, 11);
	
	InsertAtPos(&first, 75, 3);
	
	Display(first);   //call by value
	
	iRet = Count(first);
	printf("Number of nodes are : %d\n", iRet);
	
	InsertFirst(&first, 1);
	
	Display(first);   
	
	iRet = Count(first);
	printf("Number of nodes are : %d\n", iRet);
	
	InsertLast(&first,111);
	InsertLast(&first,121);
	Display(first);   //call by value
	
	iRet = Count(first);
	printf("Number of nodes are : %d\n", iRet);
	
	DeleteFirst(&first);
	DeleteFirst(&first);
	
	Display(first);   //call by value

	
	iRet = Count(first);
	printf("Number of nodes are : %d\n", iRet);
	
	
	DeleteLast(&first);
	
	Display(first);   //call by value

	
	iRet = Count(first);
	printf("Number of nodes are : %d\n", iRet);
	return 0;
}
