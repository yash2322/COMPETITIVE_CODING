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
//anoop@programmingpathshala.com
int divisors(vector<long long int>subsequence1)
{
    //cout<<"0\n";
    //cout<<subsequence1.size()<<endl;;
vector<long long int>count1(1000000,0);//array initialised to 0.
    for(long long int i=0;i<subsequence1.size();i++)
    {
       // cout<<subsequence1[i]<<endl;
            long long int number=subsequence1[i];
        for(long long int j=2;j<=number;j++)
        {
            if(number%j==0)
            {
                count1[j]++;
                if(count1[j]==subsequence1.size())
                {
                   // cout<<0<<" ";
                    return 0;
                }

            }
        }
    }
    return 1;
}
int subsequence(vector<long long int>num,long long int n)
{
   // cout<<n<<" "<<num.size();
    long long int total_possible=pow(2,n);
    FORS(i,0,total_possible)
    {
        vector<long long int>sets;
        FORS(j,0,n)
        {
             if(i&(1<<j))
             {
                sets.push_back(num[j]);
             }
        }
    if(sets.size()>0)
    {
    //cout<<sets.size()<<endl;
    int x=divisors(sets);
    if(x==1)
        return 1;
    }
    }
    return 0;
}
int main()
{
long long int t;
cin>>t;
while(t--)
{
    long long int n,input;
    cin>>n;
    vector<long long int>numbers;
    FORS(i,0,n)
    {
        cin>>input;
        numbers.push_back(input);
    }
   // cout<<n<<" "<<numbers.size();
    int x=subsequence(numbers,n);
    cout<<x<<endl;
}

}
