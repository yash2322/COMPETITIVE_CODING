#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
    long int n,c=0;
    cin>>n;
    cin.ignore();
    string s;
    cin>>s;
    set<char>vowels={'a','e','i','o','u'};
    for(long int i=0;i<s.length()-1;i++)
    {
    auto it=vowels.find(s[i]);
    if(it==vowels.end())
    {
    auto it=vowels.find(s[i+1]);
    if(it!=vowels.end())
        c++;
    }
    }
    cout<<c<<endl;
}

}
