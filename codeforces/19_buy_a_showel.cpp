#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int price_of_one_showel,special_coin;
cin>>price_of_one_showel>>special_coin;
//start with one
int i=1;
while(true)
{
//cout<<i*price_of_one_showel<<" ";
//using special coin
if((i*price_of_one_showel)%10==special_coin)
    break;
    //without using special coin
else if((i*price_of_one_showel)%10==0)
    break;
i++;
//cout<<i;
//cin>>x;
}
cout<<i;
}
