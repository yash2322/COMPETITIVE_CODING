#include<iostream>
using namespace std;
void mergesort(int *,int,int);
void merge(int *,int,int,int);
int main()
{
	int *a,n,i=0;
	cout<<"enter the number of elements\n";
	cin>>n;
	a=new int[n];
	cout<<"enter the values\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"sorting\n";
	int f=0,l=n-1;
	mergesort(a,f,l);
	cout<<"array is\n";
for(i=0;i<n;i++)
{
	cout<<a[i];
}
}
void mergesort(int a[],int f,int l)
{
	for(int i=0;i<=l;i++)
	{
		cout<<a[i]<<" ";
}
cout<<"\n";
	if(f<l)
	{
		int d=(f+l)/2;
		mergesort(a,f,d);
		mergesort(a,d+1,l);
		merge(a,f,d,l);
		
	}
}
void merge(int a[],int f,int d,int l)
{
	int n1,n2;
	n1=d-f+1;
	n2=l-d;
	int A[n1],B[n2];
	for(int i=0;i<n1;i++)
	{
		A[i]=a[f+i];
	}
	for(int i=0;i<n2;i++)
	{
		B[i]=a[d+i+1];
	}
	int cA=0;
	int cB=0;
	int cFinal=f;
	while(cA<n1&&cB<n2)
	{
		if(A[cA]<B[cB])
		{
			a[cFinal]=A[cA];
			cFinal++;
			cA++;
		}
		else
		{
			a[cFinal]=B[cB];
			cFinal++;
			cB++;
		}
	}
	while(cA<n1)
	{
		a[cFinal]=A[cA];
			cFinal++;
			cA++;
	}
	while(cB<n2)
	{
		a[cFinal]=B[cB];
			cFinal++;
			cB++;
	}
	
}
