#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int mass=0;
stack<int>formula;
for(long int i=0;i<s.length();i++)
{
if(s[i]=='(')
    formula.push(-1);
else if(s[i]=='C')
    formula.push(12);
else if(s[i]=='O')
    formula.push(16);
else if(s[i]=='H')
    formula.push(1);
else if(s[i]>='2'&&s[i]<='9')
{
    int temp=formula.top();
    formula.pop();
    int temp2=temp*(s[i]-'0');
    formula.push(temp2);
}
else if(s[i]==')')
{
    int temp=0;
    while(formula.top()!=-1)
    {
        temp+=formula.top();
        formula.pop();
    }
    formula.pop();
    formula.push(temp);
}
}
long int final_res=0;
while(!formula.empty()){
    final_res+=formula.top();
    formula.pop();
}
cout<<final_res<<endl;
cin.ignore();
}

