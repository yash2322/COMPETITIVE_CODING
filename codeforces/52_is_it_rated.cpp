#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

bool sortrev(const pair<int,int> &a,const pair<int,int> &b)
{
       return (a.first > b.first);
}

int main()
{
long int n,a,b;
cin>>n;
vector<pair<int,int>> values(n);


bool rated=false;
FORS(i,0,n)
{
    cin>>a>>b;
   values[i]={a,b};
    if((a-b)!=0)
        rated=true;
}

vector<pair<int,int>> values_sorted(values.begin(),values.end());
sort(values_sorted.begin(),values_sorted.end(),sortrev);

if(rated==true)
    cout<<"rated";
else
{
FORS(i,0,n)
{
  //  cout<<values_sorted[i].first<<"-"<<values[i].first<<endl;
    if(values_sorted[i].first!=values[i].first)
    {
        cout<<"unrated";
        break;
    }
    if(i==n-1)
    {
        cout<<"maybe";
    }

}

}

}
