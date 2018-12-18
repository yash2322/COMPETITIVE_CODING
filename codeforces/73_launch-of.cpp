#include <bits/stdc++.h>
#define FORS(i,a,b) for(long long i=a;i<b;i++)
#define FORE(i,a,b) for(long long i=a-1;i>=0;i--)

using namespace std;

int main()
{
long int n,input;
char c;
cin>>n;
vector<long int> positions;
vector<char> r_l;
vector<pair<long int,long int>> colliding_candidate_index;
vector<long int> distance_between_colliding_candidate;
FORS(i,0,n)
{
cin>>c;
r_l.push_back(c);
}
FORS(i,0,n)
{
cin>>input;
positions.push_back(input);
}
FORS(i,0,n)
{
    if(r_l[i]=='R'&&r_l[i+1]=='L')
    {
        colliding_candidate_index.push_back(make_pair(i,i+1));
    }
}
if(colliding_candidate_index.size()!=0)
{
    for(auto a:colliding_candidate_index) {
    long  int distance=positions[a.second]-positions[a.first];
    //index was stored in colliding candidate index.  so accessing its position with index;
    distance_between_colliding_candidate.push_back(distance);
    }

sort(distance_between_colliding_candidate.begin(),distance_between_colliding_candidate.end());

cout<<int(ceil(distance_between_colliding_candidate[0]/2.0))<<endl;
}
else
    cout<<-1<<endl;
}
