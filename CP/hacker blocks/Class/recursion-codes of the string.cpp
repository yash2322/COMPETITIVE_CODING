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
void number_to_string(string s,string output){
    if(s.size()==0){
        cout<<output;
        return;
    }
    if(s.size()>=2)
    {
    int number=(int(s[0]-'0'))*10+int(s[1]-'0');
    if(number<=26&&number>10){
        number_to_string(s.substr(2),output+char(96+number));
    }
    else{
        number_to_string(s.substr(1),output+char(96+number));
    }
    
    }
    
}
int main(){
 string s;
 cin>>s;
    number_to_string(s,"");
}