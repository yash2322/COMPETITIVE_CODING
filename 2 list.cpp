#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};

for(int i=0;i<2;i++)
{
node *start[1]=NULL;
}
if(start[0]==NULL)
{
	start[0]=new node;
	cout<<"\nenter the value of first element\n";
	cin>>start[0]->data;
	start[0]->link=start[0];
}
if(start[1]==NULL)
{
	start[1]=new node;
	cout<<"\nenter the value of first element\n";
	cin>>start[1]->data;
	start[1]->link=start[1];
}

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
				insert(start[0]);
				break;
			case 2:
				system("cls");
				insert(start[1]);
				break;
			case 3:
				system("cls");
				cout<<"xyz";
				break;
				case 4:
					system("cls");
					display(start[0]);
					break;
					case 5:
						system("cls");
					display(start[1]);
					break;
default:
cout<<"wrong input";				
		}
	}
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

