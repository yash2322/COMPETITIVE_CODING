//binary search
 
 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int *a,n,mid,first,last;
cout<<"\nenter the number of elements  you want to enter\n ";
cin>>n;
a=new int[n];
for(int i=0;i<n;i++)
{
cin>>a[i];	
}
int key;
cout<<"\nenter the element you want to find\n";
cin>>key;

first=0;
last=n-1;
mid=(first+last)/2;
first=0;
while(first<=last&&a[mid]!=key)
{
	if(key<a[mid])
	{
		last=mid-1;
	}
	else
	{
		first=mid+1;
	}
	mid=(first+last)/2;
	}
if(a[mid]==key)
{
	cout<<"found at "<<mid+1;
	}
else
{
	cout<<"not found";
	}	
}
