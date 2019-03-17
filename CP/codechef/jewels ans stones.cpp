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
cin.ignore();
while(t--)
{
string j,s;
cin>>j>>s;
vector<int>hai_k_nahi(150,0);
long int ascii,count_=0;
FORS(i,0,j.length())
{
ascii=j[i]-'0';
hai_k_nahi[ascii]=1;
}
FORS(i,0,s.length())
{
    ascii=s[i]-'0';
    if(hai_k_nahi[ascii]==1)
        count_++;
}
cout<<count_<<endl;
}

}
