//selection sort

#include<iostream>
#include<conio.h>
using namespace std;

void sorting_ascending(int a[],int n);
void sorting_decending(int a[],int n);
void display(int a[],int n);
int main()
{
	int *a,n,i,choice;
	cout<<"enter the number of elements you want to enter\n";
	cin>>n;
	cout<<"enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	while(true)
	{
	cout<<"select the sorting order\n";
	cout<<"\n1.selection sort ascending\n";
	cout<<"\n2.selection sort decending\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			sorting_ascending(a,n);
			display(a,n);
			break;
		case 2:
			sorting_decending(a,n);
			display(a,n);
			break;
	}
}
getch();
return 0;
}
void sorting_ascending(int a[],int n)
{
	int i,j,temp,min,loc;
	for(i=0;i<n;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
			}
	temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
	}
}
void sorting_decending(int a[],int n)
{
	int i,j,temp,max,loc;
	for(i=0;i<n;i++)
	{
		max=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(max<a[j])
			{
				max=a[j];
				loc=j;
			}
			}
	temp=a[i];
			a[i]=a[loc];
			a[loc]=temp;
	}
}
void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\n";
	}
}

