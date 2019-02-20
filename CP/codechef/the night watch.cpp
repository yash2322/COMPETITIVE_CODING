#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
long int n,consecutive_two=0,count_zeros=0;
cin>>n;
string s,original;
cin.ignore();
cin>>s;
original=s;
FORS(i,0,s.length())
{
   if(i==0)
   {
       if(s[i+1]!='1')
       {
        s[i]='1';

       }
   }
   else
   {
       if(s[i+1]!='1'&&s[i-1]!='1')
       {
           s[i]='1';

       }
   }
}
FORS(i,0,s.length())
    if(s[i]!=original[i])
        consecutive_two++;

cout<<consecutive_two<<endl;
//cout<<s<<endl;
}
}
