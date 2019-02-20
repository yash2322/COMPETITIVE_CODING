#include<iostream>
using namespace std;
int main()
{
	int a[100],freq[100],i,n,j,count;
	cout<<"enter the number of elements you want to enter\n";
    cin>>n;
    cout<<"\nenter elements\n";
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	freq[i]=-1;
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				freq[j]=0;
			}
			
		}
	if(freq[i]!=0)
	{
		freq[i]=count;
	}
	}
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
		cout<<"frequency of "<<a[i]<<" is"<<freq[i]<<endl;
	}}
	}

