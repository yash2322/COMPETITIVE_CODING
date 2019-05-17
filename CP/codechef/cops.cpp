#include<bits/stdc++.h>
using namespace std;
int main()
{
long int t;
cin>>t;
while(t--)
{
    long int m,x,y,input;
    cin>>m>>x>>y;
    vector<long int>police;
    for(long int i=0;i<m;i++)
    {
        cin>>input;
        police.push_back(input);
    }
    sort(police.begin(),police.end());
    long int positive,negative,sum=0;
    //if(police.size()>1)
    //{
     for(long int i=0;i<police.size();i++)
    {
        if(i==0)
        {
            positive=police[i]+(x*y);
            negative=police[i]-(x*y);
            cout<<negative<<" ";
            if(negative>0)
                sum+=negative-1;
            if(negative<0)
                negative=1;
        }
        if(i==police.size()-1)
        {
            long int temp=police[i]-(x*y);
            if(positive<temp)
                sum+=temp-positive-1;
            positive=police[i]+(x*y);
            if(positive<100)
                sum+=100-positive;

        }
        else
        {
            long int temp=police[i]-(x*y);
            if(positive<temp)
                sum+=temp-positive-1;
            positive=police[i]+(x*y);
        }
    }

    cout<<sum<<endl;
}

}
