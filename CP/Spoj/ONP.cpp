#include<bits/stdc++.h>
using namespace std;
int prefrence(char op)
{
    if(op=='^')
        return 3;
    else if(op=='*'||op=='/')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return -1;
}
int main(){
int t;
cin>>t;
while(t--)
{
string s,final_s="";
cin.ignore();
cin>>s;
stack<char>stk;
for(int i=0;i<s.length();i++)
{
if((s[i]>='a'&&s[i]<='z')||s[i]>='A'&&s[i]<='Z')
    final_s+=s[i];
else if(s[i]=='(')
    stk.push(s[i]);
else if(s[i]==')')
{
    while(!stk.empty()&&stk.top()!='(')
    {
        final_s+=stk.top();
        stk.pop();
    }
    if(stk.top()=='(')
        stk.pop();
}
else
{
    while(!stk.empty()&&prefrence(s[i])<=prefrence(stk.top()))
    {
        final_s+=stk.top();
        stk.pop();
    }
    stk.push(s[i]);
}
}
while(!stk.empty())
{
    final_s+=stk.top();
    stk.pop();
}
cout<<final_s<<endl;
}
}
