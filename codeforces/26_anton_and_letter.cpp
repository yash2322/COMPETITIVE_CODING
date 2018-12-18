#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
 string s;
 getline(cin,s);
 char c;
 set<char> myset;
 set<char>::iterator itr;

 FORS(i,0,s.length())
 {
    c=s[i];
    if(c>=97&&c<=122)
    {
        myset.insert(c);
    }
 }
//for(itr=myset.begin();itr!=myset.end();++itr)
//{
 //   cout<<*itr<<endl;
//}
cout<<myset.size();

}
