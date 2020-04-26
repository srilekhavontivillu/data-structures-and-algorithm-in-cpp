#include<iostream>
using namespace std;
void push(string d);
void pop();
void peek();
void display();
class stack{
	public:
	string data;
	stack*prev=NULL;
};
stack*top=NULL;
void push(string d)
{
	stack*newnode=new stack;
	newnode->data=d;
	newnode->prev=NULL;
	if(top==NULL)
	top=newnode;
	else{
	newnode->prev=top;
	top=newnode;
     }

}
void pop()
{
	stack* temp;
	temp=top->prev;
	top=temp;
}
void peek()
{
	cout<<"the top element is:"<<top->data<<"\n";
}
void display()
{
	stack*temp=top;
	while(temp!=NULL)
	{
		cout<<temp->data<<"--->";
		temp=temp->prev;
	}
	cout<<"\n";

}
int main()
{
	push("A");
	push("B");
	push("C");
	push("D");
	push("E");
    peek();
	display();
    pop();
   display();
}
