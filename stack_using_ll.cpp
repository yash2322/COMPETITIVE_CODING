#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *top=NULL;
void push();
void pop();
void display();
int main()
{
	int choice;
	while(true)
	{
		cout<<"enter your choice\n";
		cout<<"1.push\n";
		cout<<"2.pop\n";
		cout<<"3.display\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
			display();
			break;
			default:
				cout<<"enter correct choice\n";
		}
		
	}
}
void push()
{
	cout<<"enter the value to enter\n";
	int value;
	cin>>value;
	node *temp=new node;
	temp->data=value;
	if(top==NULL)
	{
		temp->link=NULL;
		top=temp;
	}
	else
	{
		temp->link=top;
		top=temp;
	}
}
void pop()
{
	if(top==NULL)
	{
		cout<<"underflow\n";
		return;
	}
	else
	{
		node *temp=top;
		int item=temp->data;
		top=top->link;
		cout<<"element deleted is :"<<item;
	}
}
void display()
{
	node *temp=top;
	while(temp!=NULL)
	{
	cout<<temp->data<<"->";
	temp=temp->link;	
	}
}
