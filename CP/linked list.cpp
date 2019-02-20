#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
node *start=NULL;
void create();
void insert_last(node *);
void delete_node(node *);
void display(node *);
void insert_between(node *);
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
			insert_last(start);
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
			insert_between(start);
			break;
		default:
			cout<<"enter correct value\n";
	}
}
}
void create()
{
	int value;
	start=new node;
	cout<<"\nenter the data value\n";
	cin>>value;
	start->data=value;
	start->link=NULL;
}
void insert_last(node *p)
{
	
	while(p->link!=NULL)
	{
		p=p->link;
	}
	node *temp=new node;
	cout<<"\nenter the value\n";
	cin>>temp->data;
	temp->link=NULL;
	p->link=temp;
	
}
void display(node *p)
{
	while(p!=NULL)
	{
		cout<<p->data<<"\n";
		p=p->link;
	}
}
void delete_node(node *p)
{
	int value;
node *temp=p;
cout<<"\nenter the value you want to delete\n";
cin>>value;
while(p!=NULL)
{
if(p->data==value)
{
	if(temp!=start)
	{
	temp->link=p->link;
	cout<<"\ndeleted\n";
	break;
    }
    else
    {
    	cout<<"in this block\n";
    	start=p->link;
    	break;
	}
}
	temp=p;
	p=p->link;	
	}
if(p==NULL)
{
	cout<<"\nunsuccessful\n";
}
	}	
void insert_between(node *p)
{
	node *temp=new node;
	int value,node_value;
	cout<<"\nenter the data value\n";
	cin>>value;
	cout<<"\nenter value after which you want to enetr\n";
	cin>>node_value;
	while(p!=NULL)
	{
		if(p->data==node_value)
		{
			temp->data=value;
			temp->link=p->link;
			p->link=temp;
		}
		p=p->link;
	}
	
}
