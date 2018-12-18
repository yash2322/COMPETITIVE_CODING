#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,count_a=0,count_b=0;
    cin>>n;

string s;
cin>>s;
FORS(i,0,s.length())
{
    if(s[i]=='A')
        count_a++;
    else
        count_b++:
}
if(count_a>count_b)
    cout<<"Anton"<<endl;
else if(count_b>count_a)
    cout<<"Dainik"<<endl;
else
    cout<<"Friendship"<<endl;

}
