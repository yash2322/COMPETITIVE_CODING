#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())


//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}
ll n,m,indexI,indexj;
vector<vector<char>>ele;
string toFollow="IEHOVA#";
string move1[]={"forth","right","left"};
int goesUp[]={-1,0,0};
int goesSide[]={0,1,-1};
vector<string>result;
void dfs(ll i,ll j,ll index_string){
    //cout<<"yes\n";
    if(index_string>=toFollow.length())
        return;
    FORS(l,0,3)
    {
         ll X=i+goesUp[l];
        ll  Y=j+goesSide[l];
        if(X>=0&&X<n&&Y>=0&&Y<m)
        {
            if(ele[X][Y]==toFollow[index_string])
            {
                result.push_back(move1[l]);
                dfs(X,Y,index_string+1);
            }
        }
    }

}
int main()
{
    ll t;
    char input;
    cin>>t;
    while(t--)
    {
    cin>>n>>m;
    cin.ignore();
        ele.resize(n);
        //cout<<"yes\n";
        FORS(i,0,n){
           // cout<<"no\n";
            //ele[i].resize(m);
            FORS(j,0,m){
                cin>>input;
                ele[i].push_back(input);
                if(ele[i][j]=='@')
                {
                    indexI=i;
                    indexj=j;
                }
        }
    }
    /*FORS(i,0,n)
    {
        FORS(j,0,m)
        {
            cout<<ele[i][j];
        }
        cout<<endl;
    }*/
    ele.clear();
    result.clear();
    dfs(indexI,indexj,0);
    //cout<<"yeshla,\n";
    cout<<result[0];
    FORS(i,1,result.size())
        cout<<" "<<result[i];
    cout<<endl;
}
}
