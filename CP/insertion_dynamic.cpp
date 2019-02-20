//insertion using dynamic array

#include<iostream>
#include<conio.h>
using namespace std;
void display(int a[],int size);
int main()
{
	int *a,n,position,value,i,size;
	cout<<"enter the size of dynamic array\n";
	cin>>n;
	a=new int[n];
	cout<<"Enter the number of elemnets you want to enter at first";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"enter the "<<i+1<<". element\n";
		cin>>a[i];
	}
	cout<<"\ncurrent array is\n";
	display(a,size);
	cout<<"\nenter the value to insert\n";
	cin>>value;
	cout<<"\nenter the index at which you want to insert\n";
	cin>>position;
	for(int j=size;j>=position;j--)
	{
		a[j+1]=a[j];
	}
	cout<<i;
	a[position]=value;
	cout<<"array after insertion\n ";
	size++;
	display(a,size);
	delete []a;
	getch();
	return 0;
}
void display(int a[],int size)
{
	for(int j=0;j<size;j++)
	cout<<j+1<<"."<<a[j]<<"\n";
}
