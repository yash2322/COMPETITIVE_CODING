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
int main()
{
    long int max_same=0;
    string s;
    cin>>s;
    unordered_map<string,long int>occ;
    FORS(i,0,s.length())
    {
        string subs="";
        FORS(j,i,s.length())
        {
            subs+=s[j];
            occ[subs]++;
        }
    }
    long int max_occ=0;
    string string_of_max_length;
    for(auto a:occ)
    {
        //cout<<a.second<<endl;
        if(a.second>max_occ)
        {
            max_occ=a.second;
            string_of_max_length=a.first;
        }
        else if(a.second==max_occ)
        {
            string temp=a.first;
            if(temp.length()>string_of_max_length.length())
                string_of_max_length=temp;
        }
    }
    if(max_occ>1)
    cout<<string_of_max_length.length();
    else
        cout<<-1;
}
