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
int find_bs(vector<ll>v, ll first,ll last,ll key)
{ 
   if (first > last) return -1; 
    int mid = (first+last)/2; 
    if (v[mid] == key) return mid; 
    if (v[first] <= v[mid]) { 
        if (key >= v[first] && key <= v[mid]) 
        return find_bs(v, first, mid-1, key); 
        return find_bs(v, mid+1, last, key); 
    } 
      if (key >= v[mid] && key <= v[last]) 
        return find_bs(v, mid+1, last, key); 
  
    return find_bs(v, first, mid-1, key);
    
} 

int main(){
 ll n,key;
 cin>>n;
 vector<ll>v;
 FORS(i,0,n){
     ll inp;
     cin>>inp;
     v.push_back(inp);
 }
 cin>>key;
 ll ans=-1;
ans=find_bs(v,0,n-1,key);
    if(ans!=-1)
    cout<<ans;
    else{
        cout<<-1;
    }
    
}