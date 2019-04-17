#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
int main()
{
long int n,input,current_min=INT_MAX,max_;
cin>>n;
vector<pair<long int,long int>>difference_array;
vector<long int>numbers;
FORS(i,0,n)
{
cin>>input;
numbers.push_back(input);
}
long int k;
cin>>k;
if(k==n-2)
    cout<<numbers[n-1]-numbers[0];
else if(k==n-3)
{
FORS(i,1,n-1)
{
       // cout<<numbers[i]<<" ";
//cout<<(numbers[i]-numbers[0])<<" "<<(numbers[n-1]-numbers[i])<<endl;
if((numbers[i]-numbers[0])>(numbers[n-1]-numbers[i]))
{
    max_=(numbers[i]-numbers[0]);
}
else
    max_=(numbers[n-1]-numbers[i]);
if(max_<current_min)
    current_min=max_;
}
}

else
{
FORS(k,0,n-1)
{
difference_array.push_back(make_pair((numbers[k+1]-numbers[k]),(k+1)));
sort(difference_array.begin(),difference_array.end());
}
vector<long int>indexes;
FORS(l,0,n-1-k)
{
    if(difference_array[l].second!=0&&difference_array[l].second!=n-1)
    indexes.push_back(difference_array[l].second);
}
sort(indexes.begin(),indexes.end());
if((indexes[0]-numbers[0])>(numbers[n-1]-indexes[indexes.size()-1]))
    current_min=(indexes[0]-numbers[0]);
else
current_min=(numbers[n-1]-indexes[indexes.size()-1]);

}
cout<<current_min<<endl;
}
