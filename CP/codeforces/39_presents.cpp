#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector<pair<int,int>> p_i(n);
    FORS(i,0,n)
    {
    cin>>x;
    p_i[i]={x,i+1};
    }
    sort(p_i.begin(),p_i.end());
    FORS(i,0,n)
    {
        cout<<p_i[i].second<<" ";
    }

}
