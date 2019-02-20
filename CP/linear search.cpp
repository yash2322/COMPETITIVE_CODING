//linear search


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int *a,n;
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
bool count=false;
for(int i=0;i<n;i++)
{
	if(a[i]==key)
	{
		cout<<"found at "<<i+1;
		count=true;
	}
}
if(count=false)
{
	cout<<"\nnot found";
}
getch();
}
