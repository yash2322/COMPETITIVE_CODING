#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
//anoop@programmingpathshala.com
int main()
{
    int input,key;
vector<vector<int>>matrix(3,vector<int>());
FORS(i,0,3)
{
    FORS(j,0,3)
    {
    cin>>input;
    matrix[i].push_back(input);
    }
}
cin>>key;
ll starting_row;
FORS(i,0,3)
{
    if(key<=matrix[i][2])
    {
        starting_row=i;
        break;
    }
}
ll f=0,l=2;
ll mid=(f+l)/2;
while(f<=l)
{
    if(matrix[starting_row][mid]==key)
    {
        cout<<starting_row<<" "<<mid;
        return 0;
    }
    else if(key>matrix[starting_row][mid])
    {
        f=mid+1;
    }
    else
        l=mid-1;

        mid=(f+l)/2;
}



}
