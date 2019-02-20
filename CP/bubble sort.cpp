#include<iostream>                      //bubble sort
using namespace std;
int main()
{
	int a[20],n,temp;
	cout<<"enter the number of elements you want to enter\n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"sorted array is \n";
	for(int i=0;i<n;i++)
	{
	 cout<<a[i]<<"\n";	
	}
	return 0;
}
