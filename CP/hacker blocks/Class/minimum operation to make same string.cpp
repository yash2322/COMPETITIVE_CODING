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
ll find_min(string s1,string s2){
if(s1.size()==0||s2.size()==0){
    return llabs((int)((s1.size())-(s2.size())));
}
ll result;
//recur
if(s1[0]==s2[0]){
    result=find_min(s1.substr(1),s2.substr(1));
}
else{
    int call1=1+find_min(s1.substr(1),s2.substr(1));
    int call2=1+find_min(s1,s2.substr(1));
    int call3=1+find_min(s1.substr(1),s2);
    result=min(call1,min(call2,call3));
}
return result;
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    /*solution is to find the lcs and then check the length of othe strings and compare it with 
    the length of the LCS  so according to question minimum operations are length pf string minus the LCS 
     */
    cout<<find_min(s1,s2);
}