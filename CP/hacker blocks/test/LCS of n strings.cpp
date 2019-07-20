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
string lcs(string s1,string s2){
ll n1=s1.length(),n2=s2.length();
int matrix[n1+1][n2+1];
FORS(i,0,n1+1){
    FORS(j,0,n2+1){
        matrix[i][j]=0;
    }
}

FORS(i,1,n1+1){
    FORS(j,1,n2+1){
        if(s1[i-1]==s2[j-1])
        matrix[i][j]=matrix[i-1][j-1]+1;
        else
        matrix[i][j]=max(matrix[i-1][j],matrix[i][j-1]);
    }
}
// cout<<matrix[n1][n2]<<endl;
ll i=n1,j=n2;
char return_s[matrix[n1][n2]+1];
ll len=matrix[n1][n2];
return_s[len]='\0';
while(i>0&&j>0){
    if(s1[i-1]==s2[j-1])
    {
        return_s[len-1]=s1[i-1];
        i--;
        j--;
        len--;
    }
    else if(matrix[i-1][j]>matrix[i][j-1])
    i--;
    else
    j--;
}
//cout<<return_s;
return return_s;
}
int main(){
    ll n=3;
    string s1,s2,return_s;
    cin>>s1>>s2;
    return_s=lcs(s1,s2);
    // cout<<return_s<<endl;
    FORS(i,2,n){
        string s3;
        cin>>s3;
        return_s=lcs(s3,return_s);
        cout<<return_s<<endl;
    }
    cout<<return_s.length();
}