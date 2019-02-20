#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,m;
char c;
cin>>n>>m>>c;
vector<vector<char>> cells(n+2,vector<char>(m+2,'0'));
set<char> numbers;
vector<pair<int,int>>indexes_of_president;
FORS(i,1,n+1)
{
    FORS(j,1,m+1)
    {
        cin>>cells[i][j];
        if(cells[i][j]==c)
            indexes_of_president.push_back(make_pair(i,j));
    }
}
FORS(x,0,indexes_of_president.size())
{
    //cout<<cells[indexes_of_president[x].first][indexes_of_president[x].second]<<"\n";
    if(cells[indexes_of_president[x].first+1][indexes_of_president[x].second]!=c&&cells[indexes_of_president[x].first+1][indexes_of_president[x].second]!='.')
        numbers.insert(cells[indexes_of_president[x].first+1][indexes_of_president[x].second]);
    if(cells[indexes_of_president[x].first-1][indexes_of_president[x].second]!=c&&cells[indexes_of_president[x].first-1][indexes_of_president[x].second]!='.')
        numbers.insert(cells[indexes_of_president[x].first-1][indexes_of_president[x].second]);
    if(cells[indexes_of_president[x].first][indexes_of_president[x].second+1]!=c&&cells[indexes_of_president[x].first][indexes_of_president[x].second+1]!='.')
        numbers.insert(cells[indexes_of_president[x].first][indexes_of_president[x].second+1]);
        if(cells[indexes_of_president[x].first][indexes_of_president[x].second-1]!=c&&cells[indexes_of_president[x].first][indexes_of_president[x].second-1]!='.')
                numbers.insert(cells[indexes_of_president[x].first][indexes_of_president[x].second-1]);
}
    auto f=numbers.find('0');
    if(f!=numbers.end())
    cout<<numbers.size()-1<<endl;
    else
    cout<<numbers.size()<<endl;
}

