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
int main(){
    long int n,inp;
    cin>>n;
    vector<ll>v;
    FORS(i,0,n){
        cin>>inp;
        v.push_back(inp);
    }
    long int i=0,j=0;
    bool decreasing=false,increasing=true;
    for(i=0;i<n;i++){
     if(v[i]<v[i-1]){
         decreasing=true;
     }
     else
        break;
    }
    if(i>=n-1&&decreasing){
        cout<<"true\n";
        return 0;
    }
    for(j=i+1;j<n;j++){
        if(v[j]>v[j-1]){
            increasing=true;
        }
        else
            break;
    }
    if(increasing&&decreasing){
        if(j==n){
            cout<<"true\n";
            return 0;
        }
        else
        {
         cout<<"false\n";
         return 0;   
        }
    }
    else if(increasing&&!decreasing){
        if(j==n)
        {
            cout<<"true";
            return 0; 
        }
        else
        cout<<"false";
    }
}