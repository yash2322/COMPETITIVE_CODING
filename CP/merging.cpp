//merging two sorted array

#include<iostream>
using namespace std;
int main()
{
	int asize,bsize,csize,*a,*b,*c,a_count=0,b_count=0,c_count=0;
	cout<<"\nenter the 1st array size\n";
	cin>>asize;
	cout<<"\nenter the 2nd array size\n";
	cin>>bsize;
	csize=bsize+asize;
	a=new int[asize];
	b=new int[bsize];
	c=new int[csize];
	cout<<"\nenter 1st array elements\n";
	for(int i=0;i<asize;i++)
	{
		cin>>a[i];
	}
	cout<<"\nenter 2nd array size\n";
	for(int i=0;i<bsize;i++)
	{
		cin>>b[i];
	}
	cout<<"\n1st array\n";
	for(int i=0;i<asize;i++)
{
	cout<<a[i]<<endl;
}
cout<<"\n2nd array\n";
for(int i=0;i<bsize;i++)
{
	cout<<b[i]<<endl;
}
	cout<<"\nmerging the array\n";
while((a_count<asize)&&(b_count<bsize))
{
	cout<<"x";
	if(a[a_count]<b[b_count])
	{
		c[c_count]=a[a_count];
		a_count++;
		c_count++;
	}
	else
	{
		c[c_count]=b[b_count];
		b_count++;
		c_count++;
	}
}
cout<<"y";
if(a_count<asize)
{
	cout<<"a";
	while(a_count<asize)
	{
		c[c_count]=a[a_count];
		a_count++;
		c_count++;
	}
	}
else{
	cout<<"a";
while(b_count<bsize)
{
	
		c[c_count]=b[b_count];
		b_count++;
		c_count++;
}
}	
cout<<"\nsorted array is\n";
for(int i=0;i<csize;i++)
{
	cout<<c[i]<<endl;
}
delete []a;
delete []b;
delete []c;


}

