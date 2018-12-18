#include<iostream>
#include<conio.h>
using namespace std;

void display(int a[], int n);

int main()
{
int *a, pos, val, size, n;

cout<<"Enter size of array: ";
cin>>size;
    a = new int[size];

cout<<"Enter no. of elements to enter: ";
cin>>n;
for(int i=0;i<n;i++)
    {
cout<<"Enter data value " <<i+1 <<": ";
cin>>a[i];        
    }
display(a,n);

cout<<"\n Enter data-value to insert: ";
cin>>val;
cout<<"\n Enter index position where to insert: ";
cin>>pos;

for(int j=n; j>=pos; j--)
    {
a[j+1] = a[j];       
    }    
a[pos] = val;
n++;

display(a,n);
delete []a;

getch();
return 0;    
}

void display(int a[], int n)
{
cout<<"\n Values in array are: ";
for(int i=0;i<n; i++)
     {
cout<<a[i] <<"   ";        
     }     
}

