/* YASH PRATP SINGH
    KE037 B58

*/

#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
char first_oc(string s, int i=0)
 {
     if (s[i] == '\0')
     {
       return 0;
     }

     if (isupper(s[i]))
     {
         return s[i];
     }

     return first_oc(s, i+1);
}
int ct_occ(string s)
{
 int len,count_c=0;;
 len=s.length();

 char abc = first_oc(s);
 FORS(i,0,len)
 {
     if(abc==s[i])

        count_c++;
      }
 return count_c;
 }
int main()
{
string str;

cin>>str;
cout<<ct_occ(str);
}

