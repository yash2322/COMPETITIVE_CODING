#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int x,required_shoes,map_unique_entries;
map<int,int> values;
FORS(i,0,4)
{
    cin>>x;
    values.insert(pair<int,int>(x,i));

}

map_unique_entries=values.size();
required_shoes=4-map_unique_entries;
cout<<required_shoes;
}
