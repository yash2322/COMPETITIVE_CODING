/*
15 30
..............................
.............#####............
.............#...#............
.....#########...#######......
....###.....######.....###....
...##....................##...
..##......................#...
..##.....................##...
..###...................##....
....###................###....
......###............###......
........###........###........
..........##########..........
..............................
...........A.P.P.L.E..........
*/
#include<bits/stdc++.h>
#include "windows.h"
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
vector<vector<char>>apple;
void recur(ll i,ll j,ll n,ll m){
    if(apple[i][j]=='#'||apple[i][j]=='Y')
        return;
    else
    {
        apple[i][j]='Y';
        system("cls");
        FORS(i,0,n){
        FORS(j,0,m)
        cout<<apple[i][j];
        cout<<endl;
        }
        Sleep(100);
        recur(i+1,j,n,m);
        recur(i-1,j,n,m);
        recur(i,j-1,n,m);
        //apple[i][j]='R';
        recur(i,j+1,n,m);
        //apple[i][j]='R';
    }

}
int main(){
    ll n,m;
    cin>>n>>m;
   apple.resize(n);
    FORS(i,0,n){
        apple[i].resize(m);
        FORS(j,0,m){
            char inp;
            cin>>inp;
            apple[i][j]=inp;
        }
    }
    ll i,j;
    cin>>i>>j;
    //give the index that falls inside the apple;
    recur(i,j,n,m);
    cout<<"yes";
    FORS(i,0,n){
        FORS(j,0,m){
        cout<<apple[i][j];

    }
     cout<<endl;
}

}
