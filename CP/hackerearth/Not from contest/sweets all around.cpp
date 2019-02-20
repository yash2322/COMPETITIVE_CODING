#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int n,input1,input2;
vector<long int> entry;
vector<long int> exit;
cin>>n;
FORS(i,0,n)
{
cin>>input1>>input2;
entry.push_back(input1);
exit.push_back(input2);
}
sort(entry.begin(),entry.end());
sort(exit.begin(),exit.end());
long int index_min=0,index_max=0,people_max=INT_MIN,current=0,toffee;
while(index_min<n&&index_max<n)
{

    if(entry[index_min]<=exit[index_max])
    {
        current++;
         if(current>people_max)
        {
        people_max=current;
        toffee=entry[index_min];
        }
        index_min++;
    }
    else
    {
        current--;
        index_max++;
    }

}
cout<<toffee<<" "<<people_max;

}
