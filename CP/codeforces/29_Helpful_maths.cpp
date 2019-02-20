#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ascii;
    char c;
    vector<int> arr_ascii;
    FORS(i,0,s.length())
    {

        if(s[i]!='+')
        {
            ascii=s[i];
            arr_ascii.push_back(ascii);
        }


    }
   sort(arr_ascii.begin(),arr_ascii.end());
    for(auto it=arr_ascii.begin();it!=arr_ascii.end();it++)
    {
        c=*it;
        cout<<c;
        if((it+1)!=arr_ascii.end())
            cout<<"+";

    }
}
