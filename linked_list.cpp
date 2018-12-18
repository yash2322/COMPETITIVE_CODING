#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{

node *F,*L,*P,*N;
int num;
F=NULL;
cout<<"Enter the values you want to enter ,ending with -1\n";
cin>>num;
while(num!=-1)
{
	N=new node;
	N->data=num;
	N->next=NULL;
	if(F==NULL)
	{
		F=N;
		L=N;
	}
	else
	{
		L->next=N;
		L=N;
	}
cin>>num;	
}
cout<<"\nnow the elements are";
P=F;
while(P!=NULL)
{
	cout<<P->data<<"->";
	P=P->next;
}
P=F;
int y,x;
cout<<"\nenter the data you want to save\n";
cin>>y;
cout<<"\nEnter the data value after which you want to enter\n";
cin>>x;
while(P!=NULL)
{
	if(P->data==x)
	{
			N=new node;
		N->data=y;
		N->next=P->next;
		
		P->next=N;
		break;
	}
	else
	{
		P=P->next;
	}
}
cout<<"\nnow the elements are";
P=F;
while(P!=NULL)
{
	cout<<P->data<<"->";
	P=P->next;
}

}
