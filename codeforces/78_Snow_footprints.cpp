#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,i=0,startiing,ending;
cin>>n;
string s;
cin.ignore();
cin>>s;
while(s[i]=='.')
{
i++;
}
if(s[i]=='R'){
        startiing=i;
        while(s[i]=='R')
            i++;
        if(s[i]=='L')
            ending=i-1;
        else
            ending=i;
    }
else{
        ending=i-1;
        while(s[i]=='L')
            i++;
        startiing=i-1;
    }
    cout<<startiing+1<<" "<<ending+1<<endl;
}
