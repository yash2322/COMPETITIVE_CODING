#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main(){
long long int n,m,input;
cin>>n;
vector<long long int>sc_l;
vector<long long int>movies;
vector<long long int>movies2;

vector<pair<long long int,long long int>>frequency_of_all;
FORS(i,0,n)
{
    cin>>input;
    sc_l.push_back(input);

}
cin>>m;
FORS(i,0,m)
{
    cin>>input;
    movies.push_back(input);
}
FORS(i,0,m)
{
    cin>>input;
    movies2.push_back(input);
}
sort(sc_l.begin(),sc_l.end());
long long int occ=1,current=1;
FORS(i,1,n)
{
if(sc_l[i]==sc_l[i-1])
{
    current++;
}
else{
    frequency_of_all.push_back(make_pair(current,sc_l[i-1]));
    current=1;
}
sort(frequency_of_all.begin(),frequency_of_all.end());

long long int size_=frequency_of_all.size();
for(long long int i=size_-1;i>=0;i--)
{
    for(long long int j=0;j<m;j++)
    {
        if(frequency_of_all[i].second==movies[j])

            {cout<<movies[j];
            return 0;
            }

    }
}
for(long long int i=size_-1;i>=0;i--)
{
    for(long long int j=0;j<m;j++)
    {
        if(frequency_of_all[i].second==movies2[j])
            {
            cout<<movies2[j];
            return 0;
            }

    }
}
}
}


