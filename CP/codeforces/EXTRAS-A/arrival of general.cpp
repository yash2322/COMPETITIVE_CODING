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
    ll n, input,max_h=0,min_h=INT_MAX,maxhI,minhI;
    vector<ll>v;
    cin>>n;
    FORS(i,0,n){
        cin>>input;
        v.push_back(input);
        if(i==0)
        {
            min_h=input;
            max_h=input;
            maxhI=i+1;
            minhI=i+1;
        }
        else{
            if(input>max_h)
            {
                max_h=input;
                maxhI=i+1;
            }
            else if(input<=min_h){
                min_h=input;
                minhI=i+1;
            }
        }
    }
    ll op=maxhI-1;
    if(maxhI>1&&minhI<n&&maxhI>minhI)
        op+=n-(minhI+1);
      else if(maxhI>1&&minhI<n&&maxhI<minhI)
        op+=n-minhI;
    else if(maxhI==1)
        op+=n-minhI;
    cout<<op;

}
