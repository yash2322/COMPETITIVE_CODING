#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
using namespace std;
bool modified_sort(const pair<long int,long int>&a,const pair<long int,long int>&b)
{
    long int value1,value2;
    value1=min((a.second)*2,a.first)-min(a.second,a.first);
    value2=min((b.second)*2,b.first)-min(b.second,b.first);
        return value1>value2;
}

int main()
{
long long int n,days_for_sell_off,products,customers,total_sale=0;
cin>>n>>days_for_sell_off;

vector<pair<long int,long int>> mayank_ka_papa;
FORS(i,0,n)
{
cin>>products>>customers;
mayank_ka_papa.push_back(make_pair(customers,products));
}
sort(mayank_ka_papa.begin(),mayank_ka_papa.end(),modified_sort);
int i=0;
/*FORS(i,0,n)
{
cout<<mayank_ka_papa[i].second<<" "<<mayank_ka_papa[i].first;
cout<<endl;
}*/

while(days_for_sell_off--)
{
    mayank_ka_papa[i].second*=2;
i++;
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
