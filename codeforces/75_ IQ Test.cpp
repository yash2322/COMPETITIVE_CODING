#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
char pattern[4][4];
int count_Hash=0,count_dot=0;
FORS(i,0,4)
{
    FORS(j,0,4)
    cin>>pattern[i][j];
}
bool possible=false;
FORS(i,0,3){
    FORS(j,0,3){

    if(pattern[i][j]=='#')
        count_Hash++;
    if(pattern[i][j+1]=='#')
        count_Hash++;
    if(pattern[i+1][j]=='#')
        count_Hash++;
    if(pattern[i+1][j+1]=='#')
        count_Hash++;
    if(count_Hash==3||count_Hash==4||count_Hash==1||count_Hash==0){

        possible=true;
        break;
    }
    else
        count_Hash=0;
    }
}
if(possible)
    cout<<"YES\n";
else
    cout<<"NO\n";
}

