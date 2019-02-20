#include<iostream>
using namespace std;
int partition(int *,int,int);
void quicksort(int *,int,int);
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
	int f=0;
	int l=n-1;
	quicksort(a,f,l);
	cout<<"\nsorted array is\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void quicksort(int a[],int f,int l)
{
	if(f<l)
	{
		int splitpoint=partition(a,f,l);
		quicksort(a,f,splitpoint-1);
		quicksort(a,splitpoint+1,l);
	}
}
int partition(int a[],int f,int l)
{
	int pivot=a[f];
	int left=f+1;
	int right=l;
bool	done=false;
	while(!done)
	{
		while(a[left]<=pivot&&left<=right)
		{
			left++;
		}
		while(a[right]>=pivot&&right>=left)
		{
			right--;
		}
		if(left>right)
		{
			done=true;
		}
		else
		{
			int temp=a[right];
			a[right]=a[left];
			a[left]=temp;
		}
	}
	int temp=a[f];
			a[f]=a[right];
			a[right]=temp;
	return right;
}

