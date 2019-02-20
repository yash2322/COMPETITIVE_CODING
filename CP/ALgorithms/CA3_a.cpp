#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=b;i--)
using namespace std;
int main()
{
int N,loss,days, minimum_product_pair=INT_MAX,product,index;
vector<int> indexes;
cin>>N;
vector<pair<int,int>> arr;
FORS(i,0,N)
{
cin>>loss>>days;
arr.push_back(make_pair(loss,days));
}
int sum=0;
for(int j=0;j<N;j++)
{
    for(int k=0;k<N;k++)
    {
      product=(arr[k].first)*(arr[k].second+sum);
      if(minimum_product_pair>product)
      {
        minimum_product_pair=product;
        index=k;
      }

    }

    sum=sum+arr[index].second;
indexes.push_back(index);
minimum_product_pair=INT_MAX;
arr[index].first=1000;
arr[index].second=1000;

}
for(auto a:indexes)
    cout<<a<<" ";

}
