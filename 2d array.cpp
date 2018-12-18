#include<iostream>
using namespace std;


int main()
{
int a[100][100],x,y;
cout<<"\nenter the number of rows and columns\n";
cin>>x>>y;
cout<<"\nenter the elements\n";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)
	{
		cout<<"enter element ["<<i<<"]["<<j<<"] =";
		cin>>a[i][j];
		cout<<"\n";
	}
}
cout<<"\nthe elements are\n";
for(int i=0;i<x;i++)
{
	for(int j=0;j<y;j++)
	{
		cout<<"the element ["<<i<<"]["<<j<<"] =";
		cout<<a[i][j];
		cout<<"\n";
	}
}

}
