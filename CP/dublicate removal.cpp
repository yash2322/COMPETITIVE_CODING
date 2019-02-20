#include<iostream>
using namespace std;

int main()
{
int a[100],i,j,k,n;
cout<<"enter number of elements \n";
cin>>n;
cout<<"enter the array elements\n";
for(i=0;i<n;i++)
{
	cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				
				}
				n--;
			}
		}
	}
cout<<"array after removing dupliactes is\n";
for(i=0;i<n;i++)
{
	cout<<a[i]<<endl;
}
}
