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
    vector<vector<ll>>bulbs(3,vector<ll>(3,1));
    vector<vector<ll>>pressed(3,vector<ll>(3,0));
    ll input;
    /*FORS(i,0,3)
    {
        FORS(j,0,3)
        cout<<bulbs[i][j]<<" ";
        cout<<endl;
    }*/
    //cout<<!0;
FORS(i,0,3)
    {
        FORS(j,0,3)
        {
            cin>>input;
            if(input%2!=0)
            {
                bulbs[i][j]=!bulbs[i][j];
                if(j+1<3)
                    bulbs[i][j+1]=!bulbs[i][j+1];
                if(j-1>=0)
                    bulbs[i][j-1]=!bulbs[i][j-1];
                if(i-1>=0)
                    bulbs[i-1][j]=!bulbs[i-1][j];
                if(i+1<3)
                    bulbs[i+1][j]=!bulbs[i+1][j];
            }
        }
    }
FORS(i,0,3)
    {
        FORS(j,0,3)
        cout<<bulbs[i][j];
        cout<<endl;
    }
}
