//hasta la victoria siempre ----  che guevara, Always
//Easy nope! Worth it? absolutely


#include<bits10_1.h/stdc++.h>
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
bool customfn(const vector<long int>&a,const vector<long int>&b);
 return a.first>b.first;


void call_seive(int n){
    bool seive[10006];
    memset(seive,false,sizeof(seive));
    FORS(i,1,n){
        if(seive[i])
        FORS(icoding)
    }
}

int main(){
int n;
cin>>n;
vector<long int>myvector;
FORS(i,0,n){
    ll input;
    cin>>input;
    myvector.push_back(input);
}
sort(myvector.begin(),myvector.end(),customfn);
call_seive(n);
}