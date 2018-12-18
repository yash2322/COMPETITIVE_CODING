#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define VI vector<long int> vtr;
#define SI set<long int> st;
#define MP map<long int,long int> maap;

using namespace std;

int main()
{
long int t;
cin>>t;
for(long int i=0;i<t;i++)
{
    long int range,count1=0;
string s;
cin>>s;
vector<long int> overlapping(s.length()+9,0);
set<long int> indexes;
set<long int>::iterator itr,last_index;
vector<char> types_of_value;
for(long int j=0;j<s.length();j++)
{
    itr=indexes.begin();
   // cout<<"*utr "<<*itr<<endl;
   if(s[j]!='.')
   {
        indexes.insert(j);
        types_of_value.push_back(s[j]);
        if(s[j]!=types_of_value[0])
        {
         //   cout<<s[j]<<"--"<<types_of_value[*itr]<<endl;
            count1++;
        }
        range=s[j]-'0';
      //  cout<<range<<endl;
        for(int l=j;l<=j+range&&l<s.length();l++)
        {
        overlapping[l]++;
        }
        for(int l=j-1;l>=(j-range)&&l>=0;l--)
        {//cout<<"yash";
        overlapping[l]++;
        }
   }
}
//cout<<"u"<<count1<<endl;
itr=indexes.begin();
last_index=indexes.end();
last_index--;
if(count1==0)
{
int can_walk;
can_walk=s[*itr]-'0';
//cout<<"--"<<can_walk<<endl;
if(*itr-can_walk>=0&&*last_index+range<s.length())
cout<<"YES"<<endl;
else
    cout<<"NO";
}

for(auto f:overlapping)
    cout<<f<<" ";
}

}
