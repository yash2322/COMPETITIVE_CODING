#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long int r,c,input,khayega=0;
cin>>r>>c;
set<long int>rows;
set<long int>columns;
string s[r];
FORS(i,0,r){
    cin>>s[i];
}
FORS(i,0,r){
    FORS(j,0,s[i].length()){
        if(s[i][j]=='S'){
            rows.insert(i);
            columns.insert(j);
        }
    }
}
khayega=(r-rows.size())*c+(c-columns.size())*r-((r-rows.size())*(c-columns.size()));
cout<<khayega;
}
