#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string x,y;
long int arr[100000];
long int carry=0,num1,num2;
cin>>x>>y;
FORS(i,0,y.length())
{
	FORS(j,0,x.length())
	{
		num1=y[i]-'0';
		//cout<<num1;
		num2=x[i]-'0';
		carry=(y[i]*x[i])/10;
		//arr[j]=
	}
}

}
