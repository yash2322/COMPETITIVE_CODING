

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
long int n,input,q,query,max_count=INT_MIN,num_max=INT_MIN;
cin>>n;
vector<long long int> arr;
FORS(i,0,n)
{
    long int count_1=0;
    string s="";


cin>>input;
arr.push_back(input);
while(input>0)
{
    s=s+to_string(input%2);
    if(input%2==1)
    {
    count_1++;
    }
    input=input/2;
}
if(count_1>max_count)
{
    max_count=count_1;
    num_max=arr[i];
}
else if(count_1==max_count&&arr[i]>num_max)
{
    max_count=count_1;
    num_max=arr[i];
}
}
cin>>q;
FORS(i,0,q)
{
cin>>query;
if(query==1)
{
     long int count_1=0;
        string s="";
        cin>>input;
        arr.push_back(input);
        while(input>0)
        {
        s=s+to_string(input%2);
        if(input%2==1)
        {
        count_1++;
        }
        input=input/2;
        }

        if(count_1>max_count)
        {
        max_count=count_1;
        num_max=arr[arr.size()-1];
        }
    else if(count_1==max_count&&arr[arr.size()-1]>num_max)
    {
    max_count=count_1;
    num_max=arr[arr.size()-1];
    }
}
else if(query==2)
{
    if(arr.size()>0)
        cout<<num_max<<endl;
        else
            cout<<-1<<endl;
}
}
}
