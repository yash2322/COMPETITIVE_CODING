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
    int range=0,iterate=0,left_road,right_road;
string s;
cin>>s;
vector<pair<long int,long int>>left_right;
vector<long int>values;
for(long int j=0;j<s.length();j++)
{
    if(s[j]!='.')
    {
        range=s[j]-'0';
        left_road=j-range;
        right_road=j+range;
        values.push_back(range);
       // if(left_road>0&&right_road<s.length())
        //{
            left_right.push_back(make_pair(left_road,right_road));
            iterate++;
        //}

    }

}

if(left_right.size()<=1)
{
    cout<<"safe"<<endl;

}
else
{
    bool flag=false;
for(long int k=0;k<left_right.size()-1;k++)
{  //cout<<"x"<<endl;
    if(left_right[k].second>=left_right[k+1].first)
    {
        if(values[k]!=values[k+1])
            flag=true;

    }
}
if(left_right[0].first<0)
{
    if(left_right[0].second>=left_right[1].first)
        flag=true;
}
if(left_right[left_right.size()-1].second>=s.length())
{
    if(left_right[left_right.size()-2].second>=left_right[left_right.size()-1].first)
        flag=true;
}
if(flag==false)
    cout<<"safe"<<endl;
else
    cout<<"unsafe"<<endl;

}

}




}
