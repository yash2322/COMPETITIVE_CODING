#include<bits/stdc++.h>
using namespace std;
int main()
{
long int a,b;
cin>>a>>b;
string s=to_string(a-b);
FORS(i,0,s.length()-1)
{
    cout<<s[i];
}
long int a=s[s.length()-1]-'0';
if(a<9)
    cout<<a++;
else
    cout<<0;

}
