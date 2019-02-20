#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;

int main()
{
    int n,index=0;
    string s,x;
    cin>>x;
    cin.ignore();
    cin>>s;
x=s;
    FORS(i,0,s.length())
    {
         if((i+2)%2==0)
        {
             x[s.length()/2+index]=s[i];
             index++;
        }
        else
        x[s.length()/2-index]=s[i];
        }
    if(s.length()%2!=0)
    cout<<x;
    else
    {
        FORE(i,s.length(),0)
        cout<<x[i];
    }

}
