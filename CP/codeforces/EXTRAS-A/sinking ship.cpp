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
int main(){
long int n;
cin>>n;
vector<string>first_names;
vector<pair<string,string>>inputs;
cin.ignore();
string f,designation;
FORS(i,0,n){
    cin>>f>>designation;
    inputs.push_back({f,designation});
}
FORS(i,0,n){
    if(inputs[i].second=="rat")
        first_names.push_back(inputs[i].first);
}
FORS(i,0,n){
    if(inputs[i].second=="woman"||inputs[i].second=="child")
        first_names.push_back(inputs[i].first);
}
FORS(i,0,n){
    if(inputs[i].second=="man")
        first_names.push_back(inputs[i].first);
}
FORS(i,0,n){
    if(inputs[i].second=="captain")
        first_names.push_back(inputs[i].first);
}
FORS(i,0,n)
cout<<first_names[i]<<endl;

}
