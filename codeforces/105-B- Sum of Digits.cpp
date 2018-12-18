#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
typedef long int li;
int main()
{
string s;
cin>>s;
li count_=0;
while(s.length()>1)
{
count_++;
li sum=0,num;
    FORS(i,0,s.length())
    {
    num=s[i]-'0';
    sum+=num;
    }
    s=to_string(sum);
}
cout<<count_;

}
