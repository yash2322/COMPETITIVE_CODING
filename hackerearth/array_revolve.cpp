#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;

int ar[100001],sum[100002];
int n;
void query1(int id,int value){
    if(value==0)
    {
        return ;
    }
    ar[id-1]=ar[id-1]+value;
    if(id==n)
        query1(1,value-1);
    else
        query1(id+1,value-1);

}
long long query2(int l,int r){
    if(l==r)
    {
      //  cout<<"upper if:"<< ar[l-1]<<endl;
    return ar[l-1];
    }

    if(l==n)
    {
       // cout<<"lower if::"<<endl;
        return ar[l-1]+query2(1,r);
    }

        else
        {
         //   cout<<"else"<<endl;
            return ar[l-1]+query2(l+1,r);
        }



}
void update_sum()
{
    sum[0]=0;
    for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+ar[i-1];
}



long long query2_new(int l,int r)
{
   // cout<<sum[r]<<endl;
 if(l<=r)   //cout<<sum[l]<<endl;
cout<<sum[r]-sum[l-1]<<endl;
if(l>r)
{
int x;
x=sum[n]-sum[l-1];
x=x+sum[r];
cout<<x<<endl;
}
}

int main(){
    int q;
    cin>>n>>q;
    sum[0]=0;
    for(int i=0;i<n;i++)
    {
       cin>>ar[i];
    }
for(int i=1;i<=n;i++)
        sum[i]=sum[i-1]+ar[i-1];
    while(q--){

        long long x,y,type;
        cin>>type>>x>>y;
        if(type==1){
             query1(x,y);
             update_sum();
        }
        else
        query2_new(x,y);
    }
   return 0;
}
