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
long int n,number,current=0,final_=0;
cin>>n;
string s;
set<long int> a[n];
FORS(i,0,n)
{
    cin>>s;
    FORS(j,0,s.length())
    {
        number=s[j]-'0';
        a[i].insert(number);
    }
}
FORS(i,0,n)
{
    for(auto x:a[i])
        cout<<x;
    cout<<endl;
}
FORS(i,0,10)
{
    current=0;
FORS(j,0,n)
{

auto itr=a[j].find(i);

    cout<<j<<" . ";
    if(itr!=a[j].end())
    {
        cout<<i<<" "<<*itr<<endl;
         current++;
          if(current>final_)
            final_=current;
    }

    else
    {
      cout<<"c="<<current<<endl;
        if(current>final_)
            final_=current;
        current=0;
    }
    if(current>final_)
            final_=current;
}
}
cout<<final_;
}
