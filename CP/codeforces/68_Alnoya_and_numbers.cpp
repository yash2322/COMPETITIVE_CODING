#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int n,m,max1,perfect_combination,modulo_m;
    cin>>n>>m;
    max1=max(n,m);
    if(n>m){//just to gernalize that :we will take m as always greater than or equal to n;
    	long long int temp;temp=n;n=m;m=temp;
    }
    perfect_combination=(max1/5)*n;
    modulo_m=m%5;
    long long int occurence_of1234_in_n[5]={0,n/5,n/5,n/5,n/5};
  	if(n%5>0)
  	{
  		for(long int i=1;i<=n%5;i++)
  		occurence_of1234_in_n[i]++;
  	}
    if(m%5>0)
    {//if m%5==1 then combnation only with 4 if , m%5==2 then 4 and 3 and so on;
    	for(long int i=4;i>=5-m%5;i--)
    		perfect_combination+=occurence_of1234_in_n[i];    //one occurence will be extra for every i that has occrered
    }
    cout<<perfect_combination;
}
