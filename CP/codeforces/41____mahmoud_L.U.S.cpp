#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

void matrix_for_lcs(string ,string);

int main()
{
string a,b;
cin>>a>>b;
bool x;
x=a.compare(b);
if(x==0)
    cout<<"-1";
else
cout<<max(a.length(),b.length());
}
