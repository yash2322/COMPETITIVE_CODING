#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long i=a;i<b;i++)
#define FORE(i,a,b) for(long long i=a-1;i>=0;i--)
using namespace std;
int main()
{

    long long t;
    cin>>t;
    FORS(i,0,t)
    {
        long long  N,M,K,L,input,time_taken,min_time=LLONG_MAX;
        cin>>N>>M>>K>>L;
        vector<long long> people;
        FORS(j,0,N)
        {
            cin>>input;
            people.push_back(input);

        }
    sort(people.begin(),people.end());
    long long j=0;

    while(people[j]<=K&&j<people.size()){
        time_taken=(M+j+1)*L-people[j];
        if(time_taken<min_time)
            min_time=time_taken;
        if(j==N-1)
            if((((L*M)+(j+2)*L)-K)<min_time)
                min_time=(((L*M)+(j+2)*L)-K);
        j++;
    }
    cout<<min_time<<endl;
    }

}
