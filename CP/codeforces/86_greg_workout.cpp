#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    int n,x,chest=0,biceps=0,back_=0;
cin>>n;
FORS(i,1,n+1){

    if(i%3==1){
        cin>>x;
        chest+=x;
    }
    if(i%3==2){
        cin>>x;
        biceps+=x;
    }
    else if(i%3==0){
        cin>>x;
        back_+=x;
    }
}
int final_=max(chest,biceps);
final_=max(final_,back_);
if(final_==chest)
    cout<<"chest";
    else if(final_==biceps)
    cout<<"biceps";
    else if(final_==back_)
    cout<<"back";
}
