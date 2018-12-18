#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int sum=0,n,input,count_bags=0;
cin>>n;
vector<int> array_;
FORS(i,0,n)
{
    cin>>input;
    array_.push_back(input);
    sum+=input;
}
if(sum%2!=0)
{
    FORS(i,0,n)
    {
        if(array_[i]%2!=0)
            count_bags++;
    }

}
else
{
    FORS(i,0,n)
    {
        if(array_[i]%2==0)
            count_bags++;
    }
}
cout<<count_bags;


}
