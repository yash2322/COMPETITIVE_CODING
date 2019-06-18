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
int pattern_find(string s,ll k,char c){
    ll current_max=1,count_=0,left_pointer=0,right_pointer=0;
    while(right_pointer<s.length()){
        if(s[right_pointer]!=c)
            count_++;
        while(count_>k){
            if(s[left_pointer]!=c)
            count_--;
            left_pointer++;
        }
        current_max=current_max>(right_pointer-left_pointer+1)?current_max:(right_pointer-left_pointer+1);
        right_pointer++;
     }
     return current_max;
   
}
int main(){
    ll k;
    cin>>k;
    cin.ignore();
    string str;
    cin>>str;
    ll final_max=1;
    FORS(i,0,26){
        ll curr=pattern_find(str,k,i+'a');
        //cout<<curr<<endl;
        if(curr>final_max)
            final_max=curr;
    }
    cout<<final_max;
}