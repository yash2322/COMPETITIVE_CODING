#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int n,m,input1,input2;
cin>>n>>m;
vector<pair<long int,long int>> match(m);
FORS(i,0,m)
{
cin>>input1>>input2;
match[i]={input2,input1};
}
}
