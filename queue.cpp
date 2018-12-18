#include<iostream>
using namespace std;
int rear=-1,front=-1,size=6;
void push(int *);
void pop(int *);
void display(int *);
int main()
{
	int choice,arr[size];
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
				push(arr);
				break;
			case 2:
				pop(arr);
				break;
			case 3:
				display(arr);
			default:
				cout<<"enter correct choice\n";
				break;
		}
	}
}
void push(int arr[])
{
	int value;
	if(front=rear+1)
	{
		cout<<"overflow \n";
		return;
	}
	else
	{
		if(front=-1)
		{
			front=0;
		}
		cout<<"enter the value\n";
		cin>>value;
		rear=rear+1;
		arr[rear]=value;
	}
}
