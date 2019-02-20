#include<bits/stdc++.h>
using namespace std;
int main()
{

	
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  long int S,X,N;
   // cin>>S>>X>>N;
    scanf("%ld %ld %ld",&S,&X,&N);
    long int t,y,prefix_sum=0;
    map <long int,long int> travelled; 
    map<long int,long int>:: iterator it;
      
	for(long int i=0;i<N;i++)
    {
        scanf("%ld %ld",&t,&y);
        travelled.insert(pair <long int,long int> (t,y)); 
    }
    
    long double z=ceil(S/double(X));

    
    long int days,left_distance;
    it=travelled.begin();
    if(z<(it->first))
    {
        cout<<z<<endl;
    }
    else
    {
    days=it->first;
    days--;
    prefix_sum=days*X;
    days++;
    long int expected_days=days;
    while(true)
    {
    	left_distance=S-prefix_sum;
    	z=ceil(left_distance/double(X));
    	expected_days=expected_days+z;
    	if((it->first)==days&&(it!=travelled.end())&&(expected_days>it->first))
    	{
    	
    		 prefix_sum=prefix_sum+(it->second);
    		 days++;
    		 it++;
    		 
    	}
    	
    	
    	else
    	{
    
    	if(it!=travelled.end()&&(expected_days>it->first))
    	{
    	prefix_sum=prefix_sum+(((it->first)-days)*X);
    	
    	
		days=(it)->first;
    	}
    
    	}
    	if(it==travelled.end()||expected_days<it->first)
    	{
    		while(prefix_sum<S)
    		{
    			
    		
    		prefix_sum=prefix_sum+X;
    		days++;
    	}
    	}
    	
    	
    	
      
        if(prefix_sum>=S)
        {
            break;
        }
        
        
    }
    printf("%ld",days-1);
}

}

