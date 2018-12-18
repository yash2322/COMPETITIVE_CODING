// bubble sort


#include<iostream>
using namespace std;

int main()
{
	int *a,n,temp;
	cout<<"enter the number of elemnts you want to enter\n";
	cin>>n;
	a=new int[n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter element "<<i+1<<" :";
		cin>>a[i];
	}
	cout<<"\nnow sorting the array\n";
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\nthe sorted array is \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
