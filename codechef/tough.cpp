#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)

using namespace std;
int main()
{
long long int t,n,input,number_of_teams_valid,count_c2,multiply=1,d=1000000007;

cin>>t;
FORS(i,0,t)
{
cin>>n;
set <long long int, greater <long long int> > skills;
set <long long int, greater <long long int> >::iterator itr,itr2;
vector<long long int> frequency(1000000,0);
FORS(j,0,n)
{
cin>>input;
skills.insert(input);
frequency[input]+=1;
}
itr=skills.begin();
while(itr!=skills.end())
{
if(frequency[*itr]==1)
{
    itr2=++itr;
    if(itr2==skills.end())
        break;
    itr--;
   count_c2=frequency[*itr2];
    multiply=(((multiply)%d)*(count_c2)%d)%d;
    cout<<multiply<<endl;
    itr++;
    frequency[*itr]-=1;
}
else if(frequency[*itr]>1)
{
    count_c2=(((frequency[*itr]*(frequency[*itr]-1)))/2)/(frequency[*itr]/2);
    multiply=(((multiply)%d)*(count_c2)%d)%d;
    cout<<multiply<<endl;
    frequency[*itr]=frequency[*itr]-2;
}
 if(frequency[*itr]==0)
    itr++;

}
cout<<multiply<<endl;
multiply=1;
}

}
