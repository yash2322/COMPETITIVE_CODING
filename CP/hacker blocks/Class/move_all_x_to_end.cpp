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
void move_x(string str,string final_,string of_x){
if(str.length()==0){
    cout<<final_+of_x;
    return;
}
if(str[0]!='x'){
final_+=str[0];
move_x(str.substr(1),final_,of_x);
}
else
move_x(str.substr(1),final_,of_x+'x');
}
int main(){
string str;
cin>>str;
move_x(str,"","");
}