#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
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
ll n,inp;
cin>>n;
vector<ll>v1,v2,v3;
FORS(i,0,n){
cin>>inp;
v1.push_back(inp);
}
FORS(i,0,n){
cin>>inp;
v2.push_back(inp);
}
ll counter=0,ptr1=0,ptr2=0;
while(counter<(2*n)&&ptr1<n&&ptr2<n){
if(v1[ptr1]<=v2[ptr2]&&ptr1<n){
v3.push_back(v1[ptr1]);
ptr1++;
counter++;
}
else if(v1[ptr1]>v2[ptr2]&&ptr2<n){
    v3.push_back(v2[ptr2]);
    ptr2++;
    counter++;
}
}
while(ptr1<n)
{
    v3.push_back(v1[ptr1]);
    ptr1++;
}
while(ptr2<n)
{
    v3.push_back(v2[ptr2]);
    ptr2++;
}
cout<<(v3[n-1]+v3[n])/2;

}
