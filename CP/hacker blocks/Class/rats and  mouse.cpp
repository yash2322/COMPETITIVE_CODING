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
map<int,int>s;
ll result=0;
FORS(i,0,n){
    ll input;
    cin>>input;
    auto f=s.find(input);
    if(f==s.end()){
        result+=input+1;
        s[input]=0;
    }
    else if(f!=s.end()){
        if(f->first==f->second){
            result+=input+1;
            f->second=0;
        }
        else{
            s[input]++;
        }
    }
}
cout<<result<<endl;
}
