#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
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
	cout<<"\nenter the choice"<<endl;
	cout<<"\n1.insert at last\n";
	cout<<"\n2.delete\n";
	cout<<"\n3.display\n";
	cout<<"\n4.insert in between\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			system("cls");
			insert_at_last(start);
			break;
		case 2:
			system("cls");
			delete_node(start);
			break;
		case 3:
			system("cls");
			display(start);
			break;
		case 4:
			system("cls");
			insert_at_mid(start);
			break;
		default:
			cout<<"enter correct value\n";
	}
}
}
void create()
{
	start=new node;
	cout<<"\nenter the value of first element\n";
	cin>>start->data;
	start->link=start;
}
void insert_at_last(node *p)
{
	while(p->link!=start)
	{
		p=p->link;
	}
	node *temp=new node;
	cout<<"enter the data value\n";
	cin>>temp->data;
	temp->link=start;
	p->link=temp;
}
void insert_at_mid(node *p)
{
	int value,data_field;
	cout<<"enter the value you want to enter\n";
	cin>>value;
	cout<<"enter the data field after which you want to enter\n";
	cin>>data_field;
	while(p->link!=start)
	{
		if(p->data==data_field)
		{
			node *temp=new node;
			temp->data=value;
			temp->link=p->link;
			p->link=temp;
		}
		p=p->link;
	}
}
void delete_node(node *p)
{
	int value;
	node *temp=NULL;

	cout<<"em=nter value to delete\n";
	cin>>value;
	while(p->link!=start)
	{
		if(p->data==value)
		{
			
			if(temp!=NULL)
			{
				temp->link=p->link;
				cout<<"deleted\n";
				break;
			}
			else if(temp==NULL)
			{
				node *last=start;
				
				while(last->link!=start)
				{
					last=last->link;
				}
				start=start->link;
				last->link=start;				
				cout<<"at first location\n";	
				return;
			}
			else
			{
				cout<<"at last location\n";
			}
			
		}
		
		temp=p;
		p=p->link;
		
	}
if(p!=start&&p->link==start)
{
	if(p->data==value)
	{
		temp->link=start;
		cout<<"item at last deleted\n";
	}
	else
	{
		cout<<"item not present\n";
	}
}
}
void display(node *p)
{
	node *temp=p;
	cout<<temp->data<<endl;
	p=p->link;
	
	while(p!=start)
	{
		cout<<p->data<<endl;
		p=p->link;		
	}
}

