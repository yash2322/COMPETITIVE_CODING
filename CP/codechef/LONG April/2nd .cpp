#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
long int n;
char c;
cin>>n;
string s;
cin.ignore();
cin>>s;
cin>>c;
long int total_subs=(n*(n+1))/2;
long int current_count=0,total_to_remove=0;
for(long int i=0;i<n;i++)
{
if(s[i]==c)
{
    total_to_remove+=(current_count*(current_count+1))/2;
    current_count=0;
}
else
{
    current_count++;
}
}
total_to_remove+=(current_count*(current_count+1))/2;
cout<<(total_subs-total_to_remove)<<endl;
}
} // std;
