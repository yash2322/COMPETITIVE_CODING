#include<iostream>
using namespace std;
int moves=0;
void hanoi(int n,char a,char b,char c)
{
	moves++;
	if(n==1)
	{
cout<<"move disc "<<n<<" form "<<a<<" to "<< c <<endl;
	}
	else
	{
		hanoi(n-1,a,c,b);
		cout<<"move disc "<<n<<" from "<<a<<" to "<< c<<endl;
		hanoi(n-1,b,a,c);
	}
}
int main()
{
	int d;
	char a='A';
	char b='B';
	char c='C';
	cout<<"enter the number of disk\n";
	cin>>d;
	hanoi(d,a,b,c);
	cout<<"\n total moves\n "<<moves;
}
