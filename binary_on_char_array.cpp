#include<iostream>
using namespace std;
int main()
{
	int a[100],num,mid,last,first,i,j;
	char c[100];
	cout<<"\nenter the characters you want in sorted order\n";
	cin>>num;
	cout<<"\nenetre the character\n";
	for(i=0;i<num;i++)
	{
		cin>>c[i];
		a[i]=c[i];
	}
	char key;int key_int;
	cout<<"enter the key you want to search\n";
	cin>>key;
	key_int=key;
	last=num-1;
	first=0;
	mid=(first+last)/2;
	while(first<=last)                        /*&&a[mid]!=key*/
	{
		if(a[mid]==key_int)
		{
			cout<<"found at location :"<<mid+1;
			break;
		}
		else if(key_int<a[mid])
		{
			last=mid-1;
		}
		else
		{
			first=mid+1;
		}
		mid=(first+last)/2;
	}
	if(first>last)
	{
		cout<<"key not found\n";
	}
}
