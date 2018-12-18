#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define speed ios_base::sync_with_stdio(false);\
cin.tie(NULL);
using namespace std;
int main()
{
int n,x=0;
cin>>n;
cin.ignore();
string s;
FORS(i,0,n)
{
    cin>>s;
    if(s.find("+")!=string::npos)
        x++;
    else
        x--;
}
cout<<x;
}
