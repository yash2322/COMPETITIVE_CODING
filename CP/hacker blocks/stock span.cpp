#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main(){
long int n,input,prev_input;
cin>>n;
vector<long int>v,v2;
FORS(i,0,n){
cin>>input;
v.push_back(input);
}
v2.push_back(1);
stack<ll>op;
op.push(0);
FORS(i,1,n)
{
    /*if(v[i-1]<=v[i])
    {
        v2.push_back(v2[i-1]+1);
    }
    else
        v2.push_back(1);*/

    while(!op.empty()&&v[i]>=v[op.top()])
        op.pop();
    if(op.empty())
    v2.push_back(i+1);
    else
        v2.push_back(i-op.top());
    op.push(i);
}
FORS(i,0,n)
cout<<v2[i]<<" ";
cout<<"END";
}

