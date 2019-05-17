#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
    vector<pair<string,string>>first_last;
    unordered_map<string,int>exist;
    string first,last;
    long int n;
    cin>>n;
    cin.ignore();
    for(long int i=0;i<n;i++)
    {
        cin>>first>>last;
        first_last.push_back({first,last});
        exist[first]++;
    }
    for(auto a:first_last)
    {
        if(exist[a.first]>1)
            cout<<a.first<<" "<<a.second<<endl;
        else
            cout<<a.first<<endl;
    }
}

}
