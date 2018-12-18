//dynamic array
#include<iostream>
#include<conio.h>
using namespace std;
void display(int a[],int size);
int main()
{
int *a,items;
cout<<"enter the number of items you want to enter\n";
cin>>items;
a=new int[items];                        //alocates n elements of int type 
for(int i=0;i<items;i++)
{
cout<<"enter the items \n ";
cin>>a[i];
cout<<"size of array now : "<<sizeof(a)<<"\n";	   //this size gives the size of pointer a 
}
cout<<"final array size : "<<sizeof(a)<<"\n";          //we cant't find the size of dynamic array if we made it using new keyword
                                                       /*because 'a' is just a pointer ,it is not stored in a way that it can be accesed */
													   /*hence,for finding the size ; its better to make dynamic allocation using std::vector<int> a(n,0)
													   this creates a array of n elements intialiazed to zero. We can have the lenght of th array using this method*/  
display(a,items);
delete []a;
getch();

return 0;	

} 
void display(int a[],int size)
{
	for(int j=0;j<size;j++)
	{
		cout<<"\n";
		cout<<"element "<<j+1<<". "<<a[j];
	}
}
