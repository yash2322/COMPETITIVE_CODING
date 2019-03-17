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
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,input;
        cin>>n;
        vector<long int>positive,negative;
        FORS(i,0,n)
        {
            cin>>input;
            if(input>0)
                positive.push_back(input);
            else
                negative.push_back(input);
        }
        if(positive.size()==0)
            cout<<negative.size()<<" "<<negative.size()<<endl;
        else if(negative.size()==0)
            cout<<positive.size()<<" "<<positive.size()<<endl;
        else
        {
            if(positive.size()>=negative.size())
                cout<<positive.size()<<" "<<negative.size()<<endl;
            else
            cout<<negative.size()<<" "<<positive.size()<<endl;

        }
    }
}
