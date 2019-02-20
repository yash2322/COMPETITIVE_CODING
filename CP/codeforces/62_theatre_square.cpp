#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long long int n,m,size_of_stone,count_of_stone;
cin>>n>>m>>size_of_stone;
if(n>size_of_stone&&m<=size_of_stone){
    count_of_stone=ceil(n/(double)size_of_stone);
}
else if(n<=size_of_stone&&m>size_of_stone){
    count_of_stone=ceil(m/(double)size_of_stone);
}
else if(n>size_of_stone&&m>size_of_stone){
    count_of_stone=(ceil(n/(double)size_of_stone))*(ceil(m/(double)size_of_stone));
}
else
    count_of_stone=1;

cout<<count_of_stone;
}

