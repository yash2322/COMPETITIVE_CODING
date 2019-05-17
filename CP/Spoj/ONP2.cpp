#include<bits/stdc++.h>
using namespace std;
int precedence(char op)
{
    if(op=='^')
        return 3;
    else if(op=='*'||op=='/')
        return 2;
    else if(op=='+'||op=='-')
        return 1;
    else
        return 0;
}
int main(){
int t;
cin>>t;
while(t--)
{
    string s,final_string="";
    stack<char>stk;
    cin.ignore();
    cin>>s;
    for(long int i=0;i<s.length();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
            final_string+=s[i];
        else if(s[i]=='(')
            stk.push(s[i]);
        else if(s[i]==')')
        {
            while(!stk.empty()&&stk.top()!='(')
            {
                final_string+=stk.top();
                stk.pop();
            }
            if(stk.top()=='(')
                stk.pop();
        }
        else
        {
            while(!stk.empty()&&precedence(s[i])<=precedence(stk.top()))
            {
                final_string+=stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }

    }
    while(!stk.empty())
    {
        final_string+=stk.top();
        stk.pop();
    }
cout<<final_string<<endl;
}

}
