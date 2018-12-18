#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int blue,red,minimum_days_for_fashion,same_socks;
cin>>blue>>red;
minimum_days_for_fashion=min(blue,red);
cout<<minimum_days_for_fashion<<" ";
same_socks=(max(blue,red)-min(blue,red))/2;
cout<<same_socks<<endl;
}
