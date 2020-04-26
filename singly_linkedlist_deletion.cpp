#include<iostream>
using namespace std;
void delete_first();
void delete_last();
void delete_middle();
void insert(string d);
void display();
class n{
	public:
	string data;
	n*next;
};
n*head=NULL;
void insert(string d)
{
	n*newnode=new n;
	newnode->data=d;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else{
		newnode->next=head;
		head=newnode;
	}
}
void display()
{
	n*t=head;
	while(t!=NULL)
	{
		cout<<t->data<<"-->";
		t=t->next;
	}
	cout<<"Null";
	cout<<"\n";
}
void delete_first()
{
	n*t=head;
	head=t->next;
}
void delete_last()
{
	n*t=head;
	while(t->next->next!=NULL)
	{
		t=t->next;
	}
	t->next=NULL;
	
}
void delete_middle()
{
	n*t,*p;
	t=head;
	string d="C";
	while(t->data!=d)
	{
		t=t->next;
	}
	p=t->next;
	t->next=p->next;
}
int main()
{
	insert("F");
	insert("E");
	insert("D");
	insert("C");
	insert("B");
	insert("A");
	display();
	delete_first();
	cout<<"After delete first"<<" ";
	display();
	delete_last();
	cout<<"After delete last"<<" ";
	display();
	delete_middle();
	cout<<"After delete middle"<<" ";
	display();
	return 0;
}

