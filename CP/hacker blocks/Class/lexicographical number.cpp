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
void lexico(int n, int limit){
if(n>limit)
    return;
if(n==limit)
{
    cout<<n<<endl;
    return;
}
cout<<n<<endl;
for(int i=(n==0)?1:0;i<=9;i++){
    lexico(10*n+i,limit);
}
}
int main()
{
ll limit;
cin>>limit;
lexico(0,limit);
}
