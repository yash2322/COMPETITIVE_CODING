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
long int t;
cin>>t;
while(t--)
{
    long int n,x,count_=0;
    cin>>n;
    vector<char>frequency(150,0);
    string s;
    cin.ignore();
    FORS(i,0,n)
    {
        set<char> unique_letter;
        cin>>s;
        FORS(j,0,s.length())
            unique_letter.insert(s[j]);
        for(auto a:unique_letter)
        {
            x=a;
           frequency[x]++;
        }
    }
    FORS(i,0,150){
        if(frequency[i]==n)
            count_++;
    }
    cout<<count_<<endl;
}


}
