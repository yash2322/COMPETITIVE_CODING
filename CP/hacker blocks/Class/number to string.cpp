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
void codes(string str,string osf,char *arr){
if(str.size()==0){
    cout<<osf<<endl;
    return;
}
int one=str[0]-'0';
int two=0;
if(str.size()>=2){
    two=stoi(str.substr(0,2));
    codes(str.substr(1),osf+arr[one],arr);
    if(two<=26)
        codes(str.substr(2),osf+arr[two],arr);
}
else{
    codes(str.substr(1),osf+arr[one],arr);
}
}
int main(){
char mapping[27];
FORS(i,1,27)
    mapping[i]=96+i;

string str;
cin>>str;
codes(str,"",mapping);
}
