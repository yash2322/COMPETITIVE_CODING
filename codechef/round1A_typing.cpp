#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
long int t,n;

cin>>t;

char hand;
FORS(i,0,t)
{
    float time=0,totaltime=0;
    map<string,float> string_appeared;
map<string,float>::iterator itr;
cin>>n;
string s;
FORS(j,0,n)
{
    cin.ignore();
    cin>>s;
    itr=string_appeared.find(s);
    if(itr!=string_appeared.end())
    {
     //   cout<<"appeared";
      time=(itr->second)/(float)2;
    //  cout<<itr->second<<endl;
     // cout<<time<<endl;
      totaltime+=time;
     // cout<<"-tt-"<<totaltime<<endl;
      continue;
    }

    time=0.2;
    FORS(k,1,s.length())
    {
    if((s[k-1]=='d'||s[k-1]=='f')&&(s[k]=='j'||s[k]=='k'))
        time=time+0.2;
    else if((s[k-1]=='j'||s[k-1]=='k')&&(s[k]=='d'||s[k]=='f'))
        time=time+0.2;
    else
        time=time+0.4;



    }
   // cout<<time<<endl;
string_appeared.insert(pair<string,float>(s,time));
totaltime+=time;

}
cout<<10*totaltime<<endl;
totaltime=0;
}

}
