#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin.ignore();
        long int c=0,max_till=0;
        cin>>s;
        stack<int>to_check;
        for(long int i=0;i<s.length();i++)
        {
            if(s[i]=='<')
                to_check.push(s[i]);
            else
            {
                if(to_check.empty())
                    break;
                else
                 to_check.pop();

            }
                if(to_check.empty())
                    max_till=i+1;
        }
        cout<<max_till<<endl;

        }

}
