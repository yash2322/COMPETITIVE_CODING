#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int N;
    cin>>N;
    long int a[N],b[N],count1=0;
    vector<pair<long int,long int>> first_two;
       for(long int i=0;i<N;i++){
        cin>>a[i];
    }
    for(long int i=0;i<N;i++){
        cin>>b[i];
    }

    for(long int i=0;i<N;i++)
    {
        for(long int j=i+1;j<N;j++)
        {
            if(a[i]<a[j]){
                 first_two.push_back(make_pair(a[i],a[j]));
                }
                        }
    }

    for(long int i=0;i<first_two.size()-1;i++)
    {
//cout<<first_two[i].first<<" - "<<first_two[i].second<<endl;
        for(long int j=0;j<N;j++)
        {
        if(b[j]>first_two[i].second)
        {
         //   three_of_them.push_back(make_pair(first_two[i],b[j]));
          // cout<<first_two[i].first<<","<<first_two[i].second<<","<<b[j]<<endl;
          count1++;
        }
        }
    }
cout<<count1;

}
