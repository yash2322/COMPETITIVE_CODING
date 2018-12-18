#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int index;
string INITIAL_string,msg;
char direction;
INITIAL_string="qwertyuiopasdfghjkl;zxcvbnm,./";
cin>>direction;
cin.ignore();
cin>>msg;
if(direction=='R')
{
// if direction is Right;
    FORS(i,0,msg.length())
    {
        //traversing the whole msg;
        //for every letter i am finding its index;
        //if index is =0 then printing the last character
        //else printing the character just before the index found because the msg is right shifted;
       index= INITIAL_string.find(msg[i]);
       if(index==0)
       {
           cout<<INITIAL_string[INITIAL_string.length()-1];

       }
       else
        cout<<INITIAL_string[index-1];
    }
}
else
{
    FORS(i,0,msg.length())
    {
       index= INITIAL_string.find(msg[i]);
       if(index==INITIAL_string.length()-1)
       {
           cout<<INITIAL_string[0];

       }
       else
        cout<<INITIAL_string[index+1];
    }
}




}
