#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case=1;
while(1)
{
    string s;
    int c=0;
    cin>>s;
    if(s[0]=='-')
        break;
    stack<char>implement;
    for(long int i=0;i<s.length();i++)
    {
        if(implement.empty())
            implement.push(s[i]);
        else if(s[i]=='{')
            implement.push(s[i]);
        else if(!implement.empty()&&implement.top()=='{'&&s[i]=='}')
            implement.pop();
        else
            implement.push(s[i]);
    }
    while(!implement.empty())
    {
    char first,second;
    first=implement.top();
    implement.pop();
    second=implement.top();
    if(first=='{'&&second=='{')
        c++;
    else if(first=='{'&&second=='}')
        c+=2;
    else if(first=='}'&&second=='}')
        c+=1;
    implement.pop();
    }
    cout<<test_case<<". "<<c<<endl;
    test_case++;
}


}
