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
int number=0;
void to_int(string s){
    if(s.length()==0)
        return;
    number=number*10+(s[0]-'0'); 
    to_int(s.substr(1));
}
int main(){
    string s;
    cin>>s;
    to_int(s);
    cout<<number;
}