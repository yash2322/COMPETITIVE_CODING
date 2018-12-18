#include<iostream>
using namespace std;
struct node
{
	node *prev,*next;
	int data;
};
struct node *start=NULL;
void create();
void insert_at_last(node *);
void insert_at_mid(node *);
void delete_node(node *);
void display(node *);
int main()
{
	int choice;
	if(start==NULL)
	{
		create();
	}
	while(true)
	{
		cout<<"\nenter your choice\n";
		cout<<"\n1.insert_at_last\n";
		cout<<"\n2.insert_at_mid\n";
		cout<<"\n3.delete\n";
		cout<<"\n4.display\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				system("cls");
				insert_at_last(start);
				break;
			case 2:
				system("cls");
				insert_at_mid(start);
				break;
			case 3:
				system("cls");
				delete_node(start);
				break;
			case 4:
				system("cls");
				display(start);
				break;
			default:
				system("cls");
				cout<<"\nenter correct choice\n";
				break; 
		}
	}
}
void create()
{
	if(start==NULL)
	{
		start=new node;
		cout<<"\nenter the value\n";
		cin>>start->data;
		start->next=NULL;
		start->prev=NULL;
	}
}
void insert_at_last(node *p)
{
	while(p->next!=NULL)
	{
		p=p->next;
	}
	node *temp=new node;
	cout<<"\nenter the value\n";
	cin>>temp->data;
	temp->next=NULL;
	p->next=temp;
	temp->prev=p;
}
void insert_at_mid(node *p)
{
	int value,location;
	cout<<"\nenter the data value you want to enter\n";
	cin>>value;
	cout<<"\nenter the location after which you want to enter\n";
	cin>>location;
	while(p!=NULL)
	{
		if(p->data==location)
		{
			node *temp=new node;
			temp->data=value;
			
			temp->next=p->next;
			
			temp->prev=p;
			p->next=temp;
			(temp->next)->prev=temp;
			break;
		}
		p=p->next;
	}
	if(p==NULL)
	{
		cout<<"\nelement was not found\n";
	}
}
void delete_node(node *p)
{
	int value;
	cout<<"\nenter the data value you want to del\n";
	cin>>value;
	while(p!=NULL)
	{
		if(p->data==value)
		{
			if(p->prev!=NULL)
			{
				cout<<"element is somewhere in between\n";
				(p->prev)->next=p->next;
				(p->next)->prev=p->prev;
				break;
			}
			else if(p->prev==NULL)
			{
				cout<<"\nfound at first location\n";
				start=start->next;
				cout<<"deleted";
				break;
				
			}
		}
		
		p=p->next;
	}
}
void display(node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<"->";
		p=p->next;
	}
}
