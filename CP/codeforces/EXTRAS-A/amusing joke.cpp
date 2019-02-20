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
string a,b,c;
int ascii;
vector<long int>frequency1(150,0);
vector<long int>frequency2(150,0);
cin>>a>>b>>c;
FORS(i,0,a.length())
{
    ascii=a[i];
    frequency1[ascii]++;
}
FORS(i,0,b.length())
{
    ascii=b[i];
    frequency1[ascii]++;
}
FORS(i,0,c.length())
{
    ascii=c[i];
    frequency2[ascii]++;
}
FORS(i,0,150)
{
    if(frequency1[i]!=frequency2[i])
    {
        cout<<"NO";
        return 0;
    }
}
cout<<"YES";

}
