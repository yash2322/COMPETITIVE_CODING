#include<iostream>
using namespace std;
void push(int *,int,int);
void push_mid(int *,int,int);
void pop(int *);
void peek(int *);
int top=-1;

int main()
{
	
	int value;
	int n;
	cin>>n;

	int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>value;
				push(arr,value,n);
		}
				
		
			//	pop(arr);
			
			
		cin>>value;
		push_mid(arr,value,n);	
			peek(arr);
	
}

void push(int arr[],int value,int size)
{
	if(top==size-1)
	{
		cout<<"overflow\n";
		return;
	}
	else
	{
		top=top+1;
		arr[top]=value;
	}
}
void push_mid(int arr[],int value,int size)
{
	
	int i=0;
	cout<<size;
	for(i=size-2;i>=size/2;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[i]=value;
//	cout<<i<<" "<<arr[i]<<endl;
	
	
	
	
}
void remove_mid(int arr[],int value,int size)
{
	
	int i=0;
	cout<<size;
	for(i=size/2;i<size;i)
	{
		arr[i]=arr[i+1];
	}
	top=top-1;
	cout<<arr[size/2]<<endl;
//	cout<<i<<" "<<arr[i]<<endl;
	
	
	
	
}



















void pop(int arr[])
{
	int item;
	if(top==-1)
	{
		cout<<"underflow\n";
		return;
	}
	else
	{
		item=arr[top];
		cout<<"deleted item is :"<<item;
		top=top-1;
		
		return;
	}
}
void peek(int arr[])
{
	int p=top;
	cout<<"elements in the stack are\n";
	while(p!=-1)
	{
		cout<<arr[p];
		p--;
	}
}
