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
ll ct=0;
void recur(string s,char output[],vector<string>maps,ll index){
    if(index==s.size()){
        ct++;
        //if(index==s.size())
        cout<<output<<" ";
        // else
        // {
        //     for(int i=0;i<s.size();i++){
        //         cout<<output[i];
        //     }
        //     cout<<" ";
        // }

        return;
    }
     FORS(i,0,maps[s[index]-'0'].size()){
        //  if((s[index]-'0')==0)
        //  recur(s.substr(1),output,maps,index);
        //  else{
         output[index]=maps[s[index]-'0'][i];
         recur(s,output,maps,index+1);
         //}
     }
    }

int main(){
    vector<string>maps={"#","abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};
    string s;
    cin>>s;
    char out[s.length()+1];
    out[s.length()]='\0';
    recur(s,out,maps,0);
    cout<<endl<<ct;
}
