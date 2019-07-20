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
typedef long long int ll;
using namespace std;
ll coun1=0;
void subsequence(string input,string output){
    if(input.size()==0){
        cout<<output<<" ";
        coun1++;
       return;
    }
    //recur
    subsequence(input.substr(1),output);
    subsequence(input.substr(1),output+input[0]);
   
   
}
int main(){
    string s;
    cin>>s;
    subsequence(s,"");
    cout<<endl<<coun1;
}