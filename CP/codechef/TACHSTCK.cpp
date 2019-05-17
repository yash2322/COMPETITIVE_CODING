#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,d,input,count_=0;
cin>>n>>d;
vector<long int>v;
for(long int i=0;i<n;i++)
{
cin>>input;
v.push_back(input);
}
sort(v.begin(),v.end());
for(long int i=0;i<n-1;i++)
{
    if(v[i+1]-v[i]<=d)
    {
    count_++;
    i+=1;
    }
}
cout<<count_;
}
