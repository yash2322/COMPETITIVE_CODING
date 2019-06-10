#include<bits/stdc++.h>
using namespace std;
int main()
{
   long int t;
   cin>>t;
   cin.ignore();
   while(t--)
   {
       string s;
        cin>>s;
        sort(s.begin(),s.end());
        if(s.length()%2==0)
        {
            long int c=0;
        for(long int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                c++;
                i++;
            }
        }
        if(c*2==s.length()-2)
            cout<<"DPS\n";
        else
            cout<<"!DPS\n";

        }
        else
        {
             long int c=0;
          for(long int i=0;i<s.length()-1;i++)
          {

              if(s[i]==s[i+1])
              {
                  c++;
                  i++;
              }

          }
              if(c*2==s.length()-3||c*2==s.length()-1)
                cout<<"DPS\n";
              else
                cout<<"!DPS\n";

        }
   }
}
