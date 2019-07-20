#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
int lcs(string s1,string s2){
    ll n=s1.length();
    ll m=s2.length();
    int matrix[n+1][m+1];
    FORS(i,0,n)
    matrix[i][0]=0;
    FORS(j,0,m)
    matrix[0][j]=0;
    FORS(i,0,n)
    {
        FORS(j,0,m){
            matrix[i][j]=0;
        }
    }

    FORS(i,1,n+1){
        FORS(j,1,m+1){
            if(s1[i-1]==s2[j-1])
                matrix[i][j]=matrix[i-1][j-1]+1;
            else
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
        }
    }
    // FORS(i,0,n)
    // {
    //     FORS(j,0,m)
    //     cout<<matrix[i][j]<<" ";
    //     cout<<endl;
    // }
    return matrix[n][m];
}
int main(){
string s1,s2;
cin>>s1>>s2;
int len=lcs(s1,s2);    
cout<<len<<endl;
}