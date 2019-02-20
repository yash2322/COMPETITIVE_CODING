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
long int n,m,input;
set<char> different_colours;
cin>>n>>m;
cin.ignore();
string s[n];
FORS(i,0,n)
{
    cin>>s[i];
}
    FORS(i,0,n){
        FORS(j,0,m){
            if(s[i][j]!=s[i][0]){
                cout<<"NO\n";
                return 0;
            }
            if(i>0&&i<m-1){
                if((s[i][0]==s[i-1][0])||s[i][0]==s[i+1][0])
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"YES\n";
}
