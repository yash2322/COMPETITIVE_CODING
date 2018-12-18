#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
string color_of_stones,instructions;
cin>>color_of_stones>>instructions;
int index_of_upper_string=0;
FORS(i,0,instructions.length())
{
    if(instructions[i]==color_of_stones[index_of_upper_string])
        index_of_upper_string++;
}
cout<<index_of_upper_string+1;
}
