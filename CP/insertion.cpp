// insertion sort    && 


#include<iostream>
using namespace std;
void insertion(int a[],int n);
int main()
{
	int *a,n;
	cout<<"enter the umber of elements you want to enter\n";
	cin>>n;
	a=new int[n];
	int i;
	cout<<"\nenter the values\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"\napplying insertion sort\n";
	insertion(a,n);
	cout<<"sorted array is\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
void insertion(int a[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
