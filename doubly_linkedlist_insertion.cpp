#include<iostream>
using namespace std;
void insert_first(string d);
void insert_last(string d);
void insert_middle(string d);
void display();
class doublenode{
	public:
	string data;
	doublenode*prev;
	doublenode*next;
};
doublenode*head=NULL;
void insert_first(string d)
{
	doublenode*newnode=new doublenode;
	doublenode*prev;
	doublenode*next;
	doublenode*t;
	newnode->data=d;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
		t=head->next;
		t->prev=newnode;
	}
	
}
void insert_last(string d)
{
doublenode*newnode=new doublenode;
	doublenode*prev;
	doublenode*next;
	doublenode*t=head;
	newnode->data=d;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(t->next!=NULL)
		{
			t=t->next;
		}
		t->next=newnode;
		newnode->prev=t;
	}	
}
void insert_middle(string d)
{
	string s="D";
	doublenode*newnode=new doublenode;
	doublenode*prev;
	doublenode*next;
	doublenode*p;
	doublenode*t=head;
	newnode->data=d;
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		while(t->data!=s)
		{
			t=t->next;
		}
		newnode->next=t->next;
		newnode->prev=t;
		t->next=newnode;
		p=newnode->next;
		p->prev=newnode;
	}
	
}
void display()
{
	doublenode*t=head;
	while(t!=NULL)
	{
		cout<<t->data<<"--->";
		t=t->next;
	}
	cout<<"Null";
}
int main()
{
	insert_first("E");
	insert_first("D");
	insert_first("C");
	insert_first("B");
	insert_first("A");
	insert_last("F");
	insert_last("G");
	insert_middle("R");
	insert_middle("O");
	insert_middle("S");
	insert_middle("E");
	display();
	return 0;
}
