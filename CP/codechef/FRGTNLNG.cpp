#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
long int n,k;
cin>>n>>k;
cin.ignore();
vector<pair<string,bool>>dict;
string s;
for(long int i=0;i<n;i++)
{
cin>>s;
dict.push_back(make_pair(s,false));
}
for(long int i=0;i<k;i++)
{
long int phraseSize;
cin>>phraseSize;
vector<string>phrase;
cin.ignore();
    for(long int j=0;j<phraseSize;j++)
    {
    cin>>s;
    phrase.push_back(s);
    }
    for(long int j=0;j<dict.size();j++)
    {
        bool isPresent=false;
        for(long int k=0;k<phrase.size();k++)
        {
            if(dict[j].first==phrase[k])
                dict[j].second=true;
        }
    }
}
for(long int j=0;j<dict.size();j++)
{
    if(dict[j].second)
        cout<<"YES ";
    else
        cout<<"NO ";
}
cout<<endl;
}
}
