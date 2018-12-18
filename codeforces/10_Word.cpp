#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
string s1;
int ascii,lower_count=0,upper_count=0;

cin>>s1;
FORS(i,0,s1.length())
{
    ascii=s1[i];
    if(ascii<=90)
        upper_count++;
    else
        lower_count++;

}

FORS(i,0,s1.length())
{
    if(lower_count>=upper_count)
    s1[i]=tolower(s1[i]);
    else
        s1[i]=toupper(s1[i]);

}
cout<<s1;


}
