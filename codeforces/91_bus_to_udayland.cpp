#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n;
    string s[n];
    cin>>n;
    bool flag=false;
    FORS(i,0,n)
    {
        cin.ignore();
        cin>>s[i];
            if(s[i][0]=='O'&&s[i][1]=='O')
            {
                flag=true;
                s[i][0]='+';
                s[i][1]='+';
            }
        else if(s[i][3]=='O'&&s[i][4]=='O')
        {
             flag=true;
                s[i][3]='+';
                s[i][4]='+';
        }
        }
    if(flag)
    {
         cout<<"YES\n";
         FORS(i,0,n)
         {
             cout<<s[i];
         }
    }

    else
        cout<<"NO\n";


}
