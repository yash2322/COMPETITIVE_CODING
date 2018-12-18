#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left,*right;
};
node *root=NULL,*loc,*par;
void find(int,node *);
void insert();
void display(node *);
int main()
{
	int choice,item;
	while(true)
	{
		cout<<"enter your choice";
		cout<<"1.Insertion"<<endl;
		cout<<"2.finding"<<endl;
		cout<<"3.display"<<endl;
		cin>>choice;
		switch(choice)
		{
		case 1:
			insert();
			break;
		case 2:
			cout<<"enter the value to search\n";
			cin>>item;
			find(item,root);
			break;
			case 3:
				display(root);
				break;
				default:
				cout<<"wrong choice\n";
				break;		
		}
	}
}
void find(int item,node *root)
{
	node *ptr,*save;
	if(root==NULL)
	{
		loc=NULL;
		par=NULL;
		return;
	}
	else if(item==root->data)
	{
		loc=root;
		par=NULL;
		return;
	}
	else
	{
		if(item<root->data)
		{
			ptr=root->left;
			save=root;
		}
		else
		{
			ptr=root->right;
			save=root;
		}
		while(ptr!=NULL)
		{
			if(ptr->data==item)
			{
				loc=ptr;
				par=save;
				return;
			}
			else if(item<ptr->data)
			{
				save=ptr;
				ptr=ptr->left;
			}
			else
			{
				save=ptr;
				ptr=ptr->right;
			}
		}
	}
	loc=NULL;
	par=save;
}
void insert()
{
	int value;
	cout<<"\nenter the value to insert\n";
	cin>>value;
	find(value,root);
	if(loc!=NULL)
	{
		cout<<"item already present\n";
		return;
	}
	else
	{
		node *newnode=new node;
		newnode->data=value;
		loc=newnode;
		newnode->left=NULL;
		newnode->right=NULL;
		if(root==NULL)
		{
			root=newnode;
		}
		else if(value<par->data)
		{
			par->left=newnode;
		}
		else
		{
			par->right=newnode;
		}
	}
}
void display(node *root)
{
		if(root==NULL)
{
    return;
}
else{
	display(root->left);
	cout<<root->data<<"->";
	display(root->right);
}

}
