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
int lcs(string s,string rev){
    int matrix[s.size()+1][s.size()+1];
    FORS(i,0,s.length()+1){
        matrix[0][i]=0;
        matrix[i][0]=0;
    }
    FORS(i,1,s.length()+1){
        FORS(j,1,s.length()+1){
            if(s[i-1]==rev[j-1])
            matrix[i][j]=matrix[i-1][j-1]+1;
            else
                matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
        }
    }
    // FORS(i,0,s.length()+1){
    //     FORS(j,0,s.length()+1)
    //     cout<<matrix[i][j]<<" ";
    //     cout<<endl;

    // }
    return matrix[s.length()][s.length()];
}
int main(){
 string s,originial,rev;
 cin>>s;
 originial=s;
    reverse(s.begin(),s.end());
    //cout<<s<<" "<<originial<<endl;
    rev=s;
   // cout<<rev<<endl;
    long int len=lcs(originial,rev);
    cout<<originial.length()-len<<endl;
}