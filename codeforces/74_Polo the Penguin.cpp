#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int N,K,l,r,numbers_total=0;
cin>>N>>K;

FORS(i,0,N)
{
cin>>l>>r;
numbers_total+=(r-l)+1;
}
if(numbers_total%K!=0)
cout<<K-numbers_total%K<<endl;
else
    cout<<0<<endl;

}
