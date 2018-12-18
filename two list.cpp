#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *startA=NULL,*startB=NULL,*startC=NULL;
void insert(node *);
void display(node *);
int main()
{
	int choice;
	while(true)
	{
		cout<<"enter choice\n";
		cout<<"1.inserting in 1st list\n";
		cout<<"2.inserting in 2nd list\n";
		cout<<"3.merging two list\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				system("cls");
				insert(startA);
				break;
			case 2:
				system("cls");
				insert(startB);
				break;
			case 3:
				system("cls");
				cout<<"xyz";
				break;
				case 4:
					system("cls");
					display(startA);
					break;
					case 5:
						system("cls");
					display(startB);
					break;
default:
cout<<"wrong input";				
		}
	}
}
void insert(node *p)
{
	
	if(p==NULL)
	{
		cout<<"this";
		p=new node;
		cout<<"enter the value\n";
		cin>>p->data;	
		p->link=p;
		
	}
	else
	{
		cout<<"this";
		node *temp=p;
		while(p->link!=temp)
		{
			p=p->link;
		}
		node *temp2;
		temp2=new node;
		cout<<"enter the value\n";
		cin>>temp2->data;
		temp2->link=temp;
		
	}
}
void display(node *p)
{
	cout<<"here it is";
	node *temp=p;
	while(p->link!=p)
	{
		cout<<p->data<<"->";
		p=p->link;
	}
}
