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
int lcs3(string s1,string s2,string s3){
    ll n1=s1.length(),n2=s2.length(),n3=s3.length();
    int matrix[n1+1][n2+1][n3+1];
    FORS(i,0,n1+1){
        FORS(j,0,n2+1){
            FORS(k,0,n3+1)
            matrix[i][j][k]=0;
        }
    }
    FORS(i,1,n1+1){
        FORS(j,1,n2+1){
            FORS(k,1,n3+1)
            if(s1[i-1]==s2[j-1]&&s2[j-1]==s3[k-1])
                matrix[i][j][k]=matrix[i-1][j-1][k-1]+1;
            else
                matrix[i][j][k]=max(max(matrix[i-1][j][k],matrix[i][j-1][k]),matrix[i][j][k-1]);            
        }
    }

    return matrix[n1][n2][n3];
}

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll len=lcs3(s1,s2,s3);
    cout<<len;
}