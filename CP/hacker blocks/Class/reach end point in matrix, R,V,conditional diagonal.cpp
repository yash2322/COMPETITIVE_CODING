#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
//number of ways to reach end point in matrix;
typedef long long int ll;
ll co=0;
void to_reach(int start_i,int start_j,int n,int m,string osf){
if(start_i==n-1&&start_j==m-1){
    cout<<osf<<" ";
    co++;
    return;
    }
if(start_i>n||start_j>m){
        return;
    }
//recur
to_reach(start_i+1,start_j,n,m,osf+'V');
to_reach(start_i,start_j+1,n,m,osf+'H');
if(start_i==start_j||start_i+start_j==n-1)
to_reach(start_i+1,start_j+1,n,m,osf+'D');


/*
int v,d;
v=to_reach(start_i+1,start_j,n,m);
d=to_reach(start_i,start_j+1,n,m);
return v+d;
*/
}
int main(){
long int start_i=0,start_j=0,n,m;
cin>>n;
to_reach(start_i,start_j,n,n,"");
cout<<endl<<co;
}
