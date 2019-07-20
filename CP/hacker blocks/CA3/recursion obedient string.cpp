#include<bits/stdc++.h>
#define FORS(i,a,b) for(int i=a;i<b;i++)
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
bool istrue(string str,int nextIs,char prev){
if(str[nextIs]=='\0')
    return 1;
if(nextIs==0&&str[nextIs]=='a')
    return istrue(str,nextIs+1,'a');
if(str[nextIs]=='b'&&str[nextIs+1]=='b'&&prev=='a')
    return istrue(str,nextIs+2,'b');
if(prev=='b'&&str[nextIs]=='a')
    return istrue(str,nextIs+1,'a');
if(prev=='a'&&str[nextIs]=='a')
    return istrue(str,nextIs+1,'a');
return 0;
}
int main(){
     string str;
     cin>>str;
     if(istrue(str,0,'a')){
        cout<<"true\n";
        return 0;
    }
    cout<<"false\n";
}
