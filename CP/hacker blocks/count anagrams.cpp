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
cin.ignore();
while(n--){
    string s;
    map<string,int>str;
    cin>>s;
    FORS(i,0,s.length()){
        FORS(j,1,s.length()+1-i){
            string s2=s.substr(i,j);
            sort(s2.begin(),s2.end());
            str[s2]++;
        }
    }
    int sum=0;
    for(auto a:str){
        if(a.second>1)
            sum+=(((a.second)-1)*a.second)/2;
        }
    cout<<sum<<endl;
}

}
