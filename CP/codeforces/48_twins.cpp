#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
int main()
{
int n,input,left_sum,right_sum,minimum_coins;
cin>>n;
vector<int> coins;
vector<int> prefix_sum(n,0);
FORS(i,0,n)
{
cin>>input;
coins.push_back(input);
}
sort(coins.begin(),coins.end(),greater<int>());
prefix_sum[0]=coins[0];
FORS(i,1,n)
{
prefix_sum[i]=prefix_sum[i-1]+coins[i];
}

FORS(i,0,n)
{
left_sum=prefix_sum[i];
right_sum=prefix_sum[n-1]-prefix_sum[i];
if(left_sum>right_sum)
{
    minimum_coins=i;
    break;
}
}
cout<<minimum_coins+1;
}

