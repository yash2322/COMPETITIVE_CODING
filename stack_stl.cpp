#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r;
    
    cin>>t;
    for(int j=0;j<t;j++)
    {
    
string s;
cin>>s;
cin>>l>>r;
stack<char> sequence;
int final=0,initial_max,check,open=0,prefinal_max=0;
for(int i=l;i<r;i++)
{
 sequence.push(s[i]);
}
stack<char> sequence1=sequence;
/*while(!sequence1.empty())
{
	cout <<" "<< sequence1.top(); 
        sequence1.pop(); 
}*/
while(!sequence1.empty())
{
    if((sequence1.top()=='(')&&open>=0)
    {
        open++;
        sequence1.pop();
        initial_max++;
    }
    else if(sequence.top()==')'&&open>=0)
    {
        open--;
        sequence1.pop();
        if(open>0)
        initial_max++;
    }
    else if(open==0&&sequence.top()==')')
    {
if(prefinal_max<initial_max)
{
    prefinal_max=initial_max;
    sequence1.pop();
}
}
else{}
if(final<prefinal_max)
{
    final=prefinal_max;
}
    
}
cout<<final;
}

	return 0;
}
