#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
vector<vector<ll>>matrix,path;
void findpath(){
    FORS(i,0,matrix[0].size()){
    FORS(j,0,matrix[0].size()){
        cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    }
    path.resize(matrix[0].size());
    FORS(i,0,matrix[0].size()){
        path[i].resize(matrix[0].size());
    }
path[0][0]=matrix[0][0];
FORS(i,1,matrix[0].size()){
 path[0][i]+=path[0][i-1];
 path[i][0]+=path[i-1][0];   
}
FORS(i,1,matrix[0].size())
{
    FORS(j,1,matrix[0].size()){
        path[i][j]+=min(path[i-1][j],path[i][j-1]);
    }
}
cout<<path[matrix[0].size()-1][matrix[0].size()-1];
}
int main(){
ll n,input;
cin>>n;
matrix.resize(n);
FORS(i,0,n){
    matrix[i].resize(n);
    FORS(j,0,n){
        cin>>input;
        matrix[i].push_back(input);
    }
}

findpath();    
}