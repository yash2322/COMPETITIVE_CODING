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
ll n;
cin>>n;
vector<ll>value;
FORS(i,0,n){
    ll input;
    cin>>input;
    value.push_back(input);
}
ll current_sum=0,final_sum=0;
ll start=0,finish=0;
FORS(i,0,n){
current_sum+=value[i];
if(current_sum>final_sum){
finish=i;
final_sum=current_sum;

if(current_sum<0){
current_sum=0;
start=i+1;
}
}

}  
cout<<final_sum<<endl;
cout<<start<<" "<<finish<<endl;
    
}