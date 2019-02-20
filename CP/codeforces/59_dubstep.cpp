#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    bool first_word_encountered=false;
string initial,final_string="";
cin>>initial;
FORS(i,0,initial.length())
{
    if(initial[i]=='W'&&initial[i+1]=='U'&&initial[i+2]=='B')
    {
        i=i+2;
        if(first_word_encountered==true)
            final_string=final_string+" ";
    }
    else
    {
        first_word_encountered=true;
        final_string=final_string+initial[i];
    }
}
cout<<final_string;


}
