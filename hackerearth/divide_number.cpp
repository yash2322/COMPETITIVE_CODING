#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,N;
    cin>>t;
 //   map<long int ,long int> factors;





    for(long long int i=0;i<t;i++)
    {
        long long int max=0,multiply=0;
        unordered_map<long long int,pair<long long int,long long int>> sum_hash;
     cin>>N;
  vector<long long int> factors;
    for(long long int i=1;i<sqrt(N)+1;i++)
    {

        if(N%i==0&&i*i!=N)
        {
       factors.push_back(i);
        factors.push_back(N/i);

        }
        if(N%i==0&&i*i==N)
        factors.push_back(i);
    }
    sort(factors.begin(),factors.end());
     //for(long long int i=0;i<factors.size();i++)
       // cout<<factors[i]<<" ";
    //sorted factors
    //[1,2,3,5,7]
    for(long long int i=0;i<factors.size();i++)
    {
    	for(long long int j=0;j<factors.size();j++)
    	{
    	    //cout<<factors[i] + factors[j]<<" "<<factors[i]<<" "<<factors[j]<<endl;
    	sum_hash[factors[i] + factors[j]] = {factors[i],factors[j]};
    	}
    }
    for(long long int i=0;i<factors.size();i++)
    {
    	for(long long int j=0;j<factors.size();j++)
    	{
    	long long int sum=factors[i]+factors[j];

    		if(sum_hash.find(N-sum)!=sum_hash.end()&&(factors[i]+factors[j]+sum_hash[N-sum].first+sum_hash[N-sum].second)==N)
    		{

    		cout<<factors[i]<<" "<<factors[j]<<" "<<sum_hash[N-sum].first<<" "<<sum_hash[N-sum].second<<endl;
    		multiply=factors[i]*factors[j]*sum_hash[N-sum].first*sum_hash[N-sum].second;
    		if(multiply>max)
    		{
    		    max=multiply;
    		}
    		}
    	}
    }
    for(long long int i=0;i<factors.size();i++)
    {
        if((factors[i]*4)==N)
        {
            if((factors[i]*factors[i]*factors[i]*factors[i])>max)
            {
                cout<<factors[i]<<endl;
                max=factors[i]*factors[i]*factors[i]*factors[i];
            }
        }
    }
    if(max>0)
    cout<<max<<endl;
    else cout<<"-1"<<endl;
	}


}
