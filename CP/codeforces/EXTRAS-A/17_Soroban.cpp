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
string s;
cin>>s;
FORE(i,s.length(),0)
{
    int coun_=4;
    int n=s[i]-'0';
    //cout<<n<<endl;
    if(n>4)
        {
        cout<<"-O|";
        n=n-5;
        while(n>0){
             cout<<'O';
             coun_--;
            n--;
        }
        cout<<'-';
        while(coun_>0)
        {
            cout<<'O';
            coun_--;
        }
    }
    else
    {
        cout<<"O-|";
        while(n>0){
             cout<<'O';
              n--;
            coun_--;
        }
        cout<<'-';
        while(coun_>0)
        {
            cout<<'O';
            coun_--;
        }
    }
    cout<<endl;
}
}
