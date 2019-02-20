//duplicate elements


#include<iostream>
using namespace std;
int main()
{
	int a[100],x;
cout<<"\nenter the number of elements";
cin>>x;
cout<<"\nenter the elements\n";
for(int i=0;i<x;i++)
{
	cout<<"enter element ["<<i<<"] =";
		cin>>a[i];
		cout<<"\n";
}
for(int i=0;i<x;i++)
{
	cout<<"element ["<<i<<"] =";
		cout<<a[i];
		cout<<"\n";
}




for(int i=0;i<x;i++)
{
	for(int j=0;j<x;j++)
	{
		if(a[j]==a[i])
		{
			for(int k=j;k<x;k++)
			{
				a[k]=a[k+1];
				x--;
			}
		}
	}
}

cout<<"\narray now is\n";
for(int i=0;i<=x;i++)
{
	cout<<"element ["<<i<<"] =";
		cout<<a[i];
		cout<<"\n";
}

}
