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
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n,m,a,d,total_even=0,total_odd=0;
        cin>>n>>m>>a>>d;
        vector<long int>numbers={a,a+d,a+2*d,a+3*d,a+4*d};
        long int elements=5;
        long int total_possible_sets=pow(2,elements);
        FORS(i,0,total_possible_sets)
        {
            vector<long int>sets;

            for(int j=0;j<elements;j++)
            {
                if(i&(1<<j))
                    sets.push_back(numbers[j]);
            }
            if(sets.size()%2==0&&sets.size()>0)
            {
            long int LCM=(sets[0]*sets[1])/__gcd(sets[0],sets[1]);
            for(int i=2;i<sets.size();i++)
                LCM=(LCM*sets[i])/__gcd(LCM,sets[i]);

            total_even+=(m/LCM)-((n-1)/LCM);
            }
            else if(sets.size()%2!=0&&sets.size()>1)
            {
                long int LCM=(sets[0]*sets[1])/__gcd(sets[0],sets[1]);
                for(int i=2;i<sets.size();i++)
                    LCM=(LCM*sets[i])/__gcd(LCM,sets[i]);

                    total_odd+=(m/LCM)-((n-1)/LCM);
            }
           /* FORS(i,0,sets.size())
            cout<<sets[i]<<" ";
            cout<<" LCM=:"<<o;
            cout<<endl;*/
        }
        long int final_answer=(m/a)-((n-1)/a)+(m/(a+d))-((n-1)/(a+d))+(m/(a+2*d))-((n-1)/(a+2*d))+(m/(a+3*d))-((n-1)/(a+3*d))+(m/(a+4*d))-((n-1)/(a+4*d));
           // cout<<"final :"<<final_answer<<endl;
            final_answer=final_answer+total_odd-total_even;
           cout<<m-n-final_answer+1<<endl;
    }
}
