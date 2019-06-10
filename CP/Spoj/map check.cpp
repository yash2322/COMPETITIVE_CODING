#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string,int>value;
    string s;
    while(s!="end")
    {
    cin>>s;
    value[s]++;
    }
    for(auto a:value)
        cout<<a.first<<" "<<a.second<<endl;
}
