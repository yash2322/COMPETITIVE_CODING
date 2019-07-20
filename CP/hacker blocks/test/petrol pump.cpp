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
ll n;
cin>>n;
vector<pair<ll,ll>>p_d;
FORS(i,0,n){
    ll p,d;
    cin>>p>>d;
    p_d.push_back({p,d});
}
FORS(i,0,n){
    ll curr_petrol=p_d[i].first,start=i,end=i;
    bool nottraversed=true;
    while(start!=end||nottraversed){
        // if(start==1)
        // {

        //     cout<<curr_petrol<<" "<<p_d[end].second<<endl;
        // }
        if(curr_petrol<p_d[end].second)
            break;
        curr_petrol-=p_d[end].second;
        end++; 
        if(end==n)
            end=0;
             curr_petrol+=p_d[end].first;
        nottraversed=false;
    }
    if(start==end&&nottraversed==false){
        cout<<start;
        return 0;
    }
}
cout<<-1;
}