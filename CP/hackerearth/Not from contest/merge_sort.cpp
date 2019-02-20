#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
void mergesort(int [],int,int);
void merging(int [],int,int ,int);

int main()
{
int n;
cout<<"enter the number of elements"<<endl;
cin>>n;
int arr[n];
cout<<"enter the elements"<<endl;
FORS(i,0,n)
{
    cin>>arr[i];
}
int f=0,l=n-1;

mergesort(arr,f,l);
cout<<"Sorted array is"<<endl;
FORS(i,0,n)
{

    cout<<arr[i]<<" ";
}

}
void mergesort(int arr[],int f,int l)
{
    int mid=0;
    if(f<l)
    {
        mid=(f+l)/2;
        mergesort(arr,f,mid);
        mergesort(arr,mid+1,l);
        merging(arr,f,mid,l);
    }

}
void merging(int a[],int f,int d,int l)
{
	int n1,n2;
	n1=d-f+1;
	n2=l-d;
	int A[n1],B[n2];
	FORS(i,0,n1)
	{
		A[i]=a[f+i];
	}
	FORS(i,0,n2)
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
