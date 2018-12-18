// creating a static array
#include<iostream>
using namespace std;
void display(int a[],int size);
int main()
{
	int a[100],items,i;
	cout<<"enter the number of items you want o enter\n";
	cin>>items;
	for(i=0;i<items;i++)
	{
		cout<<"enter the "<<i+1<<" item\n";
		cin>>a[i];
		cout<<"size of array now : "<<sizeof(a)<<"\n";
	}
cout<"\nnow displaying the items";
display(a,items);
return 0;
}
void display(int a[],int size)
{
	for(int k=0;k<size;k++)
	{
		cout<<"number "<<k+1<<". is "<<a[k]<<"\t";
	}
}

