#include<bits/stdc++.h>
#define FORS(i,a,b) for(long int i=a;i<b;i++)
#define FORE(i,a,b) for(long int i=a-1;i>=0;i--)
#define TESTC long int t;\
cin>>t;
using namespace std;
int main()
{
    long long int N,M,numbers;
    vector<pair<long int,long int>> n_array,m_array;
    cin>>N>>M;
    for(long int i=0;i<N;i++)
    {
        cin>>numbers;
        n_array.push_back(make_pair(numbers,i));
    }
    for(long int i=0;i<M;i++)
    {
        cin>>numbers;
        m_array.push_back(make_pair(numbers,i));
    }
    sort(n_array.begin(),n_array.end());
    sort(m_array.begin(),m_array.end());
    for(long int i=0;i<M;i++)
    {
        cout<<n_array[0].second<<" "<<m_array[i].second<<endl;
    }
   for(long int i=0;i<N-1;i++)
    {
        cout<<n_array[i+1].second<<" "<<M-1<<endl;
    }
}
