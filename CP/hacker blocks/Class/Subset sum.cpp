#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int main(){
ll n,inp;
cin>>n;
vector<long int>v;
FORS(i,0,n){
cin>>inp;
v.push_back(inp);
}
ll k;
cin>>k;
vector<pair<int,string>>str;
ll total_sets=pow(2,n);
FORS(i,0,total_sets){
    string s="";
    ll sum=0;
    //cout<<i<<endl;
    FORS(j,0,n)
    {
        //cout<<j<<" ";
        if(i&(1<<j)){
            sum+=v[j];
            s+=to_string(v[j]);
            s+=" ";
        }

    }

        if(sum==k){
            string temp="";
            FORS(j,0,s.length()-1)
            temp+=s[j];
            str.push_back({s.length(),temp});
        }

    //cout<<endl;
}
sort(str.begin(),str.end());
FORS(i,0,str.size()){
    reverse((str[i].second).begin(),(str[i].second).end());
cout<<str[i].second<<endl;
}



}


