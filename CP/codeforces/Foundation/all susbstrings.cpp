#include<bits/stdc++.h>
using namespace std;
 int main()
 {
  string s;
  cin>>s;
    /*for(int i=0;i<s.length();i++)
    {
        for(long int j=i;j<s.length();j++)
        {
        string st="";
        for(long int k=i;k<=j;k++)
        {
        st+=s[k];
        }
        cout<<st<<endl;
        }
    }*/
    string s1="YASHPRATAPSINGH";
    string s2="PRATAP";
    for(long int i=0;i<=s1.length()-s2.length();i++)
    {
    string temp=s1.substr(i,s2.length());
    cout<<temp<<endl;
    if(temp==s2)
        cout<<"found at "<<i+1<<endl;
    }
    for(long int i=0;i<=s1.length()-s2.length();i++)
    {
        int j;
        for(j=0;j<s2.length();j++)
        {
            if(s1[i+j]!=s2[j])
                break;
        }
        if(j==s2.length())
            cout<<"find at "<<i+1<<endl;
    }
    int found=s1.find(s2);
    while(found!=string::npos)
    {
        cout<<found<<endl;
        found=s1.find(s2,found+1);

    }


  }
