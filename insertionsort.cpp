#include<iostream>    // insertion sorting
using namespace std;
int main()
{
	int a[20],n,i,j,temp;
	cout<<"enter the number of elemnets you want to enter\n";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
    int j=i;
    while(j>0 && a[j]<a[j-1])
	{
	temp=a[j];
	a[j]=a[j-1];
	a[j-1]=temp;
	j--;
		}	

}
cout<<"sorted array is \n";	
for(i=0;i<n;i++)
{
	cout<<a[i]<<"\n";
}
	return 0;
}
