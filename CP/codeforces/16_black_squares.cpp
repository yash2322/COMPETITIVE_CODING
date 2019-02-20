#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
long int integers[5],calorie=0;
FORS(i,1,5)
{
    cin>>integers[i];
}
string s;
cin>>s;
FORS(i,0,s.length())
{
    //converting s[i] into integer
    int x=s[i]-'0';
    calorie=calorie+integers[x];

}
cout<<calorie;

}
