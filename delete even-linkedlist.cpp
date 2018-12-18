#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
int main()
{
	struct node *f,*l,*p,*n;
	f=NULL;
	l=NULL;
	p=NULL;
	n=NULL;  
	int num;
	cout<<"\nenetr the data values ending with -1\n";
	cin>>num;
	while(num!=-1)
	{
		n=new node;
		n->data=num;
		n->next=NULL;
		if(f==NULL)
		{
		f=n;
		l=n;
		p=f;
		}
	else
	{
		l->next=n;
		l=n;
	}

	cin>>num;
	}

cout<<"\nNow data values entered are\n";
	
	while(p!=NULL)
	{
		if(p->next==NULL){
			cout<<p->data<<"";
			p=p->next;
		}
		else{
			cout<<p->data<<"->";
			p=p->next;
		}
		
	}
cout<<"\nGoing to delete even numbers\n";
p=f;
node *temp;

temp=f;

while(p!=NULL)
{
	//first
	if(p==f){
		if(p->data%2==0)
		{
			p=p->next;
			temp=p;
			f=p;
			
		}
		else
		{
			p=p->next;
			
		}
		
	}
	
	if(p->data%2==0)
	{
		temp->next=p->next;
		
		p=p->next;
	}
	else{
	
		temp=p;
		p=p->next;
	}
	
	
	//last
	if(p==l){
		if(l->data%2==0){
			temp->next=NULL;
			l=temp;
			break;
		}
	}
}
	cout<<"\nnow data values after deletion are\n";
	
	p=f;
	while(p!=NULL)
	{
		if(p->next==NULL){
			cout<<p->data<<"";
			p=p->next;
		}
		else{
			cout<<p->data<<"->";
			p=p->next;
		}
		
	}
	
}
