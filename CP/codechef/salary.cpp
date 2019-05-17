#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long int n,input,answer=0;
    cin>>n;
    vector<long int>v;
    for(long int i=0;i<n;i++)
    {
    cin>>input;
    v.push_back(input);
    }
    sort(v.begin(),v.end());
    for(long int i=1;i<n;i++)
    {
        answer+=v[i]-v[0];
    }
    cout<<answer<<endl;
    }
}
