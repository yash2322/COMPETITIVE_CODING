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
bool anagrams(int *hash1,int *hash2){
    for(int i=0;i<26;i++){
        if(hash1[i]!=hash2[i]){
            return false;
        }
    }
    return true;
}
vector<int> allanagram(string s1,string s2){
    vector<int>result;
int hash2[26]={0};
FORS(i,0,s2.size()){
    hash2[s2[1]-'a']++;
}
for(int i=0;i<s1.length()-s2.length();i++){
    int hash1[26]={0};
    for(int j=i;j<s2.length();j++){
        hash1[s1[j]-'a']++;
    }
    if(anagrams(hash1,hash2)){
        result.push_back(i);
    }
}
FORS(i,0,result.size()){
cout<<result[i]<<" ";
}

}

int main(){
string s1,s2;
cin>>s1>>s2;
allanagram(s1,s2);
}