#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string initial,final_str="";
cin>>initial;
FORS(i,0,initial.length())
{
  if(initial[i]=='A'||initial[i]=='a'||initial[i]=='E'||initial[i]=='e'||initial[i]=='I'||initial[i]=='i'||initial[i]=='O'||initial[i]=='o'||initial[i]=='U'||initial[i]=='u'||initial[i]=='Y'||initial[i]=='y')
  {
      continue;
  }
  else
  {
     initial[i]= tolower(initial[i]);
   final_str=final_str+"."+initial[i];
  }
}
cout<<final_str;

}
