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
//triplets occur in pattern (m^2-n^2,2mn,m^2+n^2)     proving = (m^2-n^2)^2 + (2mn)^2=(m^2+n^2)^2
//if the number is even then chances of it being 2mn is higher, and if a number  is odd then it will be (m^2-n^2)

ll x,m,n,m1,n1;
cin>>x;
if(x%2==0)
{
    m=x/2;
    n=1;
    
}
else
{
    m=(x+1)/2;
    n=(x-1)/2;
}

cout<<(2*m*n)<<" "<<(pow(m,2)+pow(n,2))<<" OR "<<(2*m*n)<<" "<<(pow(m,2)-pow(n,2));


    
}