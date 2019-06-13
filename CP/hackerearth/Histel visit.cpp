#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
//number of ways to reach end point in matrix;
typedef long long int ll;
int main(){
ll q,k,inp;
cin>>q>>k;
//priority_queue <int, vector<int>, greater<int> > pq;

set<long long int>v;
while(q--){
cin>>inp;
if(inp==1)
{
ll x,y;
cin>>x>>y;
ll d=x*x+y*y;
v.insert(d);
}
else{
ll i=0;
for(auto a:v){
    i++;
    if(i==k){
        cout<<a<<endl;
        break;
    }
}
}
}
}
