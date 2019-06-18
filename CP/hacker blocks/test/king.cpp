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
vector<vector<ll>>kings;
ll c=0;
bool safe(int row,int k){
    FORS(i,0,k)
        if(kings[row][i])
            return false;
    if(row>0&&k>0)
    {
        if(kings[row-1][k-1])
        return false;
    }
    
    if(row<kings[0].size()-1){
        if(kings[row+1][k-1])
        return false;
    }
   FORS(i,0,kings.size())
   {
       FORS(j,0,kings.size()){
           cout<<kings[i][j]<<" ";
       }
       cout<<endl;
   }
   cout<<endl;
    return true;
}
int solve(int n,int k){
    if(k==n){ 
        cout<<"yes\n";
        c=c+1;
        return 1;
    }
    bool possible=false;
    FORS(i,0,n){
        if(safe(i,k)){
            kings[i][k]=1;
            possible=solve(n,k+1)||possible;
            kings[i][k]=0;
        }
    }
return 1;
}

int main(){
    ll n;
    cin>>n;
    kings.resize(n);
    FORS(i,0,n)
    kings[i].resize(n);
    FORS(i,0,n){
        FORS(j,0,n)
        kings[i][j]=0;
    }
    cout<<kings[0].size()<<endl;
    solve(n,0);
    cout<<c;
}