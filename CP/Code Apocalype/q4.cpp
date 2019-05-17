#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())

//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
/*ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}*/
int main()
{
long int t;
cin>>t;
while(t--)
{
string s;
long int count_f=0,count_total=0;
cin.ignore();
cin>>s;
if(s.length()==1)
{
    cout<<1<<endl;
    return 0;
}
vector<long int>aage_kitne_f(s.length(),0);
FORS(i,1,s.length())
{
if(s[s.length()-1-i]=='F')
{
count_f++;
aage_kitne_f[s.length()-2-i]=count_f;
}
}
FORS(i,0,s.length())
{
if(aage_kitne_f[i]>0&&i!=s.length()-1)
{
    count_total+=2;
}
else if(aage_kitne_f[i]==0&&i!=s.length()-1&&s[i]!='F')
{
count_total+=1;
}
if(i==s.length()-1)
{
    if(s[i]=='F')
}
}
}

}
