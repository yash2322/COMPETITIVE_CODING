#include<iostream>   //binary search
using namespace std;
int main()
{
	int a[20],n,f,l,m,key,i;
	cout<<"enter the number of elements you want to enter\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the number you want to enter\n";
	cin>>key;
	f=0;
	l=n-1;
	m=(f+l)/2;
	while(f<l&&a[m]!=key)
	{
		if(key>a[m])
		{
			f=m+1;
		}
		else
		{
			l=m-1;
		}
		m=(f+l)/2;
	}
	if(a[m]==key)
	{
		cout<<"key found at\n"<<m+1;
	}
	else
	{
		cout<<"key not found\n";
	}
	return 0;
}
