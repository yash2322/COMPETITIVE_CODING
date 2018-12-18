#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int a,b,left=0,right=0,draw=0;
cin>>a>>b;
//without loops

if(a<b)
{  //if a<b then all the number below and including 'a' will win by a; i.e left
    left=a;
    if((b-a)%2==0)
    {               //if numbers in between a and b  is odd
        draw=1;
        left=left+(b-a)/2-1;
        right=right+(b-a)/2-1;
    }
    else
    {
        //if numbers in between a and b  is even
        draw=0;
         left=left+(b-a)/2;
        right=right+(b-a)/2;
    }
    right=right+6-b+1;    //all the number above b will be win by b
}
else if(a>b)
{
right=b;
left=left+6-a+1;
    if((a-b)%2==0)
    {
        draw=1;
        left=left+(a-b)/2-1;
        right=right+(a-b)/2-1;
    }
    else
    {
        draw=0;
         left=left+(a-b)/2;
        right=right+(a-b)/2;
    }

}
else
{ //if both are same
    draw=6;
    left=0;
    right=0;
}
cout<<left<<" "<<draw<<" "<<right<<endl;
}

