#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
    FS
long int t;
cin>>t;
while(t--)
{
    long long int n,input,k,to_find,counter=0;
    cin>>n;
    vector<pair<long long int,long long int>>songs;
    FORS(i,0,n)
    {
        cin>>input;
        songs.push_back(make_pair(input,i+1));
    }
    cin>>k;
    to_find=songs[k-1].first;
sort(songs.begin(),songs.end());
for(auto a:songs)
{
    counter++;
 if(to_find==a.first)
        cout<<counter<<endl;
}

}



}
