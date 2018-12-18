#include<iostream>
using namespace std;
struct node{
	int data;
	node *ptr;
};
int main()
{
	struct node *f,*l,*n,*p;
	f=NULL;
	int num;
	cout<<"\nenetr the data values ending with -1\n";
	cin>>num;
	while(num!=-1)
	{
		n=new node;
		n->data=num;
		n->ptr=NULL;
		if(f==NULL)
		{
			f=n;
			l=n;
		}
		else
		{
			l->ptr=n;
			l=n;
		}
		cin>>num;
	}
	cout<<"\nnow data values entered are\n";
	p=f;
	while(p!=NULL)
	{
		cout<<p->data<<"\n";
		p=p->ptr;
	}
}
