#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    string s;
    int x,size_,frequence[2]={0,0},len=0;
    cin>>size_;
    cin.ignore();
    cin>>s;
    FORS(i,0,s.length())
    {
        if(s[i]=='0')
            frequence[0]++;
        else
            frequence[1]++;
    }
  //3  cout<<frequence[1]<<endl;
    len=s.length()-(2*(min(frequence[1],frequence[0])));




    cout<<len;
}
