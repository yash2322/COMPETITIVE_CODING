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
int lps(string s){
    int matrix[s.size()+1][s.size()+1];
    FORS(i,0,s.size()){
        FORS(j,0,s.size()){
            matrix[i][j]=0;
        }
    }
    FORS(i,0,s.length())
        matrix[i][i]=1;

// for(ll len=2;len<=s.length();len++){
//     for(ll i=0;i<=s.length()-len;i++){
//         ll j=i+len-1;
//         if(s[i]==s[j]&& len==2)
//             matrix[i][j]=2;
//             else if(s[i]==s[j])
//                 matrix[i][j]=matrix[i+1][j-1]+2;
//                 else
//                 matrix[i][j]=max(matrix[i+1][j],matrix[i][j-1]);

//     }
// }

    FORS(length,2,s.length()+1){
        FORS(i,0,s.length()+1-length){
            ll j=i+length-1;
            if(s[i]==s[j]&&length==2){
                matrix[i][j]=2;
            }
            else if(s[i]==s[j])
                matrix[i][j]=matrix[i+1][j-1]+2;
                else
                    matrix[i][j]=max(matrix[i+1][j],matrix[i][j-1]);                
        }
    }
    //cout<<matrix[0][s.length()-1]<<endl;
    return matrix[0][s.length()-1];
}
int main(){
    ll t;
    cin>>t;
    cin.ignore();
    while(t--){
    string s;
    cin>>s;
    cout<<(s.length()-lps(s))<<endl;
    }
}