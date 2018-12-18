#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string s1,s2;
cin>>s1>>s2;
FORS(i,0,s1.length())
{
    if(s1[i]==s2[i])
        cout<<0;
    else
        cout<<1;
}

}
