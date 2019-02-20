#include<iostream>    //selection sort
using namespace std;

int main()
{
	int a[20],n,i,min,j,temp;
	cout<<"enter the number of elemnets you want to enter\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		
		}
	if(min!=i)
		{
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	cout<<"sorted array is\n";
for(i=0;i<n;i++)
{
	cout<<a[i]<<"\n";
	}	
}
