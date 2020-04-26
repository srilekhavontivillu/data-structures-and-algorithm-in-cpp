#include<iostream>
using namespace std;
void insert_first(string d);
void display();
class node
{
    public:
	string data;
	node*next;
};
node*head=NULL;
void insert_first(string d)
{
   node*newnode=new node;
   newnode->data=d;
   newnode->next=NULL;
   node*temp;
   if(head==NULL)
   head=newnode;


   	newnode->next=head;
   	temp=head;
   	while(temp->next!=head)
   	temp=temp->next;
   	temp->next=newnode;
   	head=newnode;

}

void display()
{
	node*t;
	t=head;
	cout<<t->data<<"--->";
	t=t->next;
	while(t!=head)
	{
		cout<<t->data<<"--->";
		t=t->next;
	}
}
int main()
{
	insert_first("E");
	insert_first("D");
	insert_first("C");
	insert_first("B");
	insert_first("A");
	display();
	return 0;
}
