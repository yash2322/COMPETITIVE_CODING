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
    FS
long int t;
cin>>t;
while(t--)
{
long long int g;
cin>>g;
while(g--)
{
    long long int I,N,Q,tails,heads;
    cin>>I>>N>>Q;
    if(I==1)
    {
        if(N%2==0)
            tails=N/2;
        else
            tails=(N/2)+1;
        heads=N-tails;
    }
    else
    {
        if(N%2==0)
            heads=N/2;
        else
            heads=(N/2)+1;
        tails=N-heads;
    }
    if(Q==1)
        cout<<heads<<endl;
    else
        cout<<tails<<endl;
}



}


}
