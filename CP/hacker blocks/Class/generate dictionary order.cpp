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
string s2;
void dict_order(string s,string output,bool x){
    if(s.length()==0&&s2!=output){
        cout<<output<<endl;
        return ;
    }
    for(int i=0;i<s.length();i++){
        if(x){
            dict_order(s.substr(0,i)+s.substr(i+1),output+s[i],x);
        }
        else{
            if(s[i]>=s[0]){
                 dict_order(s.substr(0,i)+s.substr(i+1),output+s[i],x||s[i]>=s[0]);
            }
        }
    }
}

int main(){
    string s;
    cin>>s;
    s2=s;
    dict_order(s,"",false);
}