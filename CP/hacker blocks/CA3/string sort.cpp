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
bool mycmp(string &a,string &b){
	string s1,s2;
	s1=a.substr(0,b.length());
	s2=b.substr(0,a.length());
	if(s1==b){
        return a.length()>b.length();
	}
	else if(s2==a){
        return b.length()>a.length();
	}
	return a<b;


}
int main(){
	ll n;
	cin>>n;
	cin.ignore();
	string s;
	vector<string>str;
	FORS(i,0,n){
	cin>>s;
	str.push_back(s);
	}
	sort(str.begin(),str.end(),mycmp);
	FORS(i,0,n)
	cout<<str[i]<<endl;
}
