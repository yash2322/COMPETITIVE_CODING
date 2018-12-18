#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
int n,turns=0,anti,clock;
string initial,final_;
cin>>n;
cin.ignore();
cin>>initial>>final_;
FORS(j,0,n)
{
    int i,f;
    i=initial[j]-'0';
    f=final_[j]-'0';

if((abs(i-f))<(abs(10-abs(i-f))))
    turns+=abs(i-f);
else
    turns+=abs(10-abs(i-f));
}
cout<<turns;
}
