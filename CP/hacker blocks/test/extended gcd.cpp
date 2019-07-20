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
int extended_gcd(int a,int b,int *x,int *y){
    if(b==0){
        *x=0;
        *y=1;
        return *y;
    }
    int x1,y1;
    int gcd=extended_gcd(b,a%b,&x,&y);
    *x=y1-(a/b)* x1;
    *y=x1;
    return gcd;
}
int main(){
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int c=extended_gcd(a,b,&x,&y);
    cout<<x<<" "<<y<<" "<<c;
}