#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
    bool c=true;
    long int counter=0;
    long n,m,input;
    cin>>n>>m;
    vector<long int>completed(n+1,0),chef,second;
    FORS(i,0,m)
    {
        cin>>input;
        completed[input]=1;
    }
    FORS(i,0,n)
    {
    if(completed[i+1]!=1)
    {
        if(c)
        {
            chef.push_back(i+1);
            c=false;
        }
        else
        {
            second.push_back(i+1);
            c=true;
        }
    }
    }
    FORS(i,0,chef.size())
    cout<<chef[i]<<" ";
    cout<<endl;
    FORS(i,0,second.size())
    cout<<second[i]<<" ";
    cout<<endl;
}

}

