													//PRATCICAL   :1
													


//question1
#include<iostream>
using namespace std;
void creating(int **a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nEnter the element "<<i+1<<endl;
		cin>>a[i];
	}
}
void display(int &a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"\nelement "<<i+1<<"=";
		cout<<a[i]<<endl;
	}
}
void insert(int **a,int *n,int item,int loc)
{
	
	for(int i=*n;i>=loc;i--)
	{
		a[*n+1]=a[*n];
	}
	a[loc]=item;
}

int main()
{
	int *a;
	int n;
	int x;
	while(1)
	{
	cout<<"Select the options given below";
	cout<<"\n1.For Creating a array\n";
	cout<<"\n2.For Displaying the array\n";
	cout<<"\n3.For inserting in array\n";
	cout<<"\n4.For deleting in array\n";
	cin>>x;
	switch(x){
		case 1:
			cout<<"\nEnter the Size of array\n";
			cin>>n;
			a=new int[n];
			creating(a,n);
			cout<<"\nArray of given size created\n";
		case 2:
			cout<<"\ndisplaying array\n";
			display(a,n);
		case 3:
			n=n+1;
			int item,loc;
			cout<<"\nEnter the elemnt you want to enter\n";
			cin>>item;
			cout<<"\nEnter the location\n";
			cin>>loc;
			insert(&a,&n,item,loc);
	}
}
}
