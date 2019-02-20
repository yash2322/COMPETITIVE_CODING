#include<iostream>
using namespace std;
int main()
{
	int r,c;
	
	cout<<"Enter the row and col \n"
	cin>>r;
	int *a[r];
	cin>>c;
	for(int x=0;x<r;x++)
	{
		a[x]=new int[c];
	}
	
}
