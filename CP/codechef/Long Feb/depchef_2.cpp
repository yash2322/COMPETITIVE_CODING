#include <bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;

using  namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
    long int n,input,answer=INT_MIN;
    bool found=false;
    cin>>n;
    vector<long int> attack;
    vector<long int>defence;
    FORS(i,0,n)
    {
        cin>>input;
        attack.push_back(input);
    }
    FORS(i,0,n)
    {
        cin>>input;
        defence.push_back(input);
    }
    vector<int>prefix(n,0);
    prefix[0]=attack[1]+attack[3];
    prefix[n-2]=attack[n-1]+attack[1];
    prefix[n-3]=attack[n-2]+attack[0];
    prefix[n-1]=attack[0]+attack[2];
    FORS(i,1,n-3)
    {
        prefix[i]=attack[i+1]+attack[i+3];
    }
    FORS(i,0,n)
    {
    if(defence[i]>prefix[i])
    {
        if(defence[i]>answer)
            answer=defence[i];
        found=true;
    }
    }
    if(found==false)
        cout<<"-1"<<endl;
        else
            cout<<answer<<endl;

}
}
