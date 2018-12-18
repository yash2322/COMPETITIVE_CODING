#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,temp=0;
vector<int> sizes_of_black;
string s;
cin>>n;
cin.ignore();
cin>>s;
FORS(i,0,s.length())
{
if(s[i]=='B')
{
     temp++;
}
if(s[i]=='W'||i==s.length()-1)
{
    if(temp!=0)
        sizes_of_black.push_back(temp);
     temp=0;
}
}
cout<<sizes_of_black.size()<<endl;
FORS(i,0,sizes_of_black.size())
    cout<<sizes_of_black[i]<<" ";
}
