
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int bricks;
    cin>>bricks;
    bool turn=0;
    int current_brick=1;
     int round=1;
   while(true)
   {
        int x=0;
       while(x<round)
       {
         //  cout<<"patlu:"<<x+current_brick<<endl;
        if(x+current_brick==bricks)
        {
               cout<<"Patlu";
               return 0;
        }
        x++;
       }
       current_brick+=round;
       x=0;
       while(x<round*2)
       {
          // cout<<"Motu:"<<x+current_brick<<endl;
           if(x+current_brick==bricks)
           {
               cout<<"Motu";
               return 0;
           }
           x++;
       }
       current_brick+=round*2;
       round++;
   }


}
