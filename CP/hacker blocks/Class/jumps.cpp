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


//player can take either 1 jump or 2 or 3 at a time

int jumps(int stairs,int curr,int number_of_jumps){
//base
if(curr>stairs)
    return 0;
if(curr==stairs)
    return 1;
int result=0;
//recur
FORS(i,1,number_of_jumps+1){
result+=jumps(stairs,curr+i,number_of_jumps);
}
return result;
}

int main(){
int stairs,number_of_jumps;
cin>>stairs>>number_of_jumps;
cout<<jumps(stairs,0,number_of_jumps);
}
