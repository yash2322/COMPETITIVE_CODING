#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MOD 1000000007
using namespace std;
int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(0);
long long int t;
cin>>t;
FORS(i,0,t)
{
    long long int N,K,v,sum=0,productSum = 1;
    cin>>N>>K;
    if((N==K && K!=1) || N<K||N<(K*(K+1))/2)
        cout<<"-1"<<endl;
    //else if(N==K && K==1)
      //  cout<<"0"<<endl;
    else{
    vector<long long int> arr;
    if(K==2){
        if(N%2!=0){
            arr.push_back(N/2);
            arr.push_back((N/2)+1);
            sum=(N/2)+(N/2)+1;
        }else{
            arr.push_back((N/2)+1);
            arr.push_back((N/2)-1);
             sum=((N/2)+1)+((N/2)-1);
        }
    }
    else{
        v=(N/K)-K/2;
        FORS(j,0,K)
        {
            arr.push_back(v+j);
            sum=sum+(v+j);
        }
    }
if(sum<N)
{
    long long int index=arr.size()-1;
    while(sum<N)
    {
        sum++;
    arr[index]++;

    if(index==0){
        index=arr.size();
    }
    index--;
    }

}
 bool flag=true; //  long long productSum = 1;
for(auto a:arr){
    if(a<=0){
        productSum = -1;
        break;
    }

    //productSum=(productSum%MOD*((a%MOD*a%MOD)%MOD-a%MOD)%MOD)%MOD;
    productSum=((productSum%MOD)*(a%MOD))%MOD;
}
for(auto a:arr){
    if(a<=0){
        productSum = -1;
        break;
    }

    //productSum=(productSum%MOD*((a%MOD*a%MOD)%MOD-a%MOD)%MOD)%MOD;
    productSum=((productSum%MOD)*((a-1)%MOD))%MOD;
}
cout<<productSum<<'\n';
}
}



}
