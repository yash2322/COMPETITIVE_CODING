#include<bits/stdc++.h>
using namespace std;


long int yash(long long int x)
{
	long long int t,N;
    
 //   map<long int ,long int> factors;
    vector<long int> factors;
    
    unordered_map<long long int,pair<long long int,long long int>> sum_hash;
    
    
    
        long long int max=INT_MIN,multiply=0;
    N=x;
  
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
    	
    		if(sum_hash.find(N-sum)!=sum_hash.end())
    		{
    		   
    		//cout<<factors[i]<<" "<<factors[j]<<" "<<sum_hash[N-sum].first<<" "<<sum_hash[N-sum].second<<endl;
    		multiply=factors[i]*factors[j]*sum_hash[N-sum].first*sum_hash[N-sum].second;
    		if(multiply>max)
    		{
    		  //  cout<<factors[i]<<" "<<factors[j]<<" "<<sum_hash[N-sum].first<<" "<<sum_hash[N-sum].second<<endl;
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
                max=factors[i]*factors[i]*factors[i]*factors[i];
            }
        }
    }
    if(max>0)
    return max;
    else return 0;
	

}
int main()
{
	while(true)
	{
	
    long int t,N;
    
    
 //   map<long int ,long int> factors;
    vector<long int> factors;
    
        long int max=0,multiply=0;;
    N=rand()%40000+1;
  
    for(long int i=1;i<sqrt(N)+1;i++)
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
    for(long int i=0;i<factors.size();i++)
    {
    	for(long int j=0;j<factors.size();j++)
    	{
    		for(long int k=0;k<factors.size();k++)
    		{
    			for(long int l=0;l<factors.size();l++)
    			{
    				if((factors[i]+factors[j]+factors[k]+factors[l])==N)
    				{
    					multiply=(factors[i]*factors[j]*factors[k]*factors[l]);
    					if(multiply>max)
    					{
    					    //cout<<factors[i]<<" "<<factors[j]<<" "<<factors[k]<<" "<<factors[l]<<endl;
    						max=multiply;
    					}
    				}
    			}
    		}
    	}
    }
   // cout<<max;
    char c;
	long long int x=yash(N);
	{
		if(x==max)
		{
			cout<<"same"<<endl;
			continue;
		}
		else
		{
			cin>>c;
			cout<<N<<endl;
			cout<<max<<" "<<x<<endl;
			cin>>c;
		}
	}
	

}
    
}
