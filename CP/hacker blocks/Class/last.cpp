#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
#define max_val 150;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
ll n,m;
ll hist(int l[]){
stack<long int>indexes;
ll i=0,current_max=0,result=0,top_pointer;
while(i<m){
    if(indexes.empty()||l[indexes.top()]<=l[i])
        indexes.push(i++);
    else{
        top_pointer=l[indexes.top()];
        indexes.pop();

        current_max=top_pointer*(indexes.empty()?i:i-indexes.top()-1);
        if(current_max>result)
            result=current_max;
    }
}
while(!indexes.empty()){
    top_pointer=l[indexes.top()];
    indexes.pop();
    current_max=top_pointer*(indexes.empty()?i:i-indexes.top()-1);
    if(current_max>result)
        result=current_max;
}
return result;
}
int main(){
    cin>>n>>m;
    int land[n][m];
    FORS(i,0,n){
        FORS(j,0,m)
        cin>>land[i][j];
    }
    ll curr=hist(land[0]);
    FORS(i,1,n){
        FORS(j,0,m)
        if(land[i][j])
        land[i][j]+=land[i-1][j];
        curr=max(hist(land[i]),curr);
    }
    cout<<curr;
}