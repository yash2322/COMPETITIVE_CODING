#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000

using namespace std;
int main()
{
long long int n,days_for_sell_off,products,customers,total_sale=0,factor_for_zero_product=0;
cin>>n>>days_for_sell_off;

vector<pair<long int,long int>> mayank_ka_papa;
FORS(i,0,n)
{
cin>>products>>customers;
mayank_ka_papa.push_back(make_pair(customers,products));
}
sort(mayank_ka_papa.begin(),mayank_ka_papa.end());
FORS(i,0,days_for_sell_off)
{
    if(mayank_ka_papa[n-i-1-factor_for_zero_product].second!=0)
    {
        while(mayank_ka_papa[n-i-1-factor_for_zero_product])
    }
                                                                    //doubling the products where maximum customers will come
else
    {
    factor_for_zero_product++;
    i--;
    }
}
FORS(i,0,n)
{
if(mayank_ka_papa[i].second<mayank_ka_papa[i].first)
    total_sale+=mayank_ka_papa[i].second;
else
    total_sale+=mayank_ka_papa[i].first;
}
cout<<total_sale;
}
