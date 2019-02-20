#include<iostream>
using namespace std;
void insert(int,int,int)
void delete_heap(int *,int)
int main()
{
	int *a,n,i,item;
	cout<<"enter number of elements\n";
	cin>>n;
	a=new int[n];
	cout<<"enter value\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		item=a[i];
		insert(a,i,item);
	}
	cout<<"list inserted is\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	for(i=n;i>=1;i--)
	{
		item=delete_heap(a,i)
		a[i-1]=item;
	}
	cout<<"sorted list is\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void insert(int a[],int i,int item)
{
	int par,ptr,temp;
	item=a[i];
	ptr=i;
	par=(ptr-1)/2;
	while(ptr>=1)
	{
		if(a[par]>a[ptr])
		{
			break;
		}
		else
		{
			temp=a[par];
			a[par]=a[ptr];
			a[ptr]=temp;
			ptr=par;
			par=(ptr-1)/2;
		}
	}
}
void delete_heap(a,i)
{
	int item,temp,j=0;
	item=a[0];
	
}
