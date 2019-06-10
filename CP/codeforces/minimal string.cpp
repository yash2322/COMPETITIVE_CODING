#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,sorted_s,u="";
cin>>s;
//cout<<s;
stack<char>t;
sorted_s=s;
sort(sorted_s.begin(),sorted_s.end());
cout<<sorted_s<<endl;
long int pointer=0;
bool flag=false;
//cout<<sorted_s<<endl;
for(long int i=0;i<s.length();i++)
{
    /*while(pointer<s.length()&&s[pointer]!=sorted_s[i])
    {
        //cout<<s[i]<<endl;
        t.push(s[pointer]);
        pointer++;

    }
    if(pointer<s.length()&&s[pointer]==sorted_s[i])
        {
            cout<<sorted_s[i];
            pointer++;
        }*/

       if(s[pointer]==sorted_s[i])
       {
        cout<<sorted_s[i];
        pointer++;
        continue;
       }
       else if(!t.empty()&&t.top()==sorted_s[i])
       {
           cout<<t.top();
           t.pop();
       }
       else
       {
           while(pointer<s.length()&&s[pointer]!=sorted_s[i])
           {
            t.push(s[pointer]);
            pointer++;
           }
           if(s[pointer]==sorted_s[i])
           {
               cout<<sorted_s[i];
               pointer++;
           }
       }
}
while(!t.empty())
{
    cout<<t.top();
    t.pop();
}

}
