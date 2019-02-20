


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
int count=0;
stack<char> sequence;
for(int i=l;i<=r;i++)
{
	
    if(s[i]=='(')
    {
    	
        sequence.push(s[i]);
    }
    else
    {
        if(!sequence.empty()&&sequence.top()=='(')
        {
            sequence.pop();
            count=count+2;
        }
        else
        {
            
        }
    }
}
cout<<count<<endl;
        count=0;
    }
}

