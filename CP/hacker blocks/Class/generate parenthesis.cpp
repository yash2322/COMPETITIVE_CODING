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
typedef long long int ll;
using namespace std;
int gen_parenthesis(ll n,ll op,ll cl,string output){
    if(cl==n){
        cout<<output<<endl;
        return 0;
    }
    if(op<n)
    gen_parenthesis(n,op+1,cl,output+"(");
    if(op>cl)
    gen_parenthesis(n,op,cl+1,output+")");
    
}

int main(){
    ll n;
    cin>>n;
    gen_parenthesis(n,0,0,"");
}