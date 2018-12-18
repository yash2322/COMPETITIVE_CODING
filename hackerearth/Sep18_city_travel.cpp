#include<bits/stdc++.h>
using namespace std;
int main()
{
  /* long int S,X,N;
    cin>>S>>X>>N;
    long int t,y,km_travelled_array_each_day[10000],km_travelled_prefix_array[10000]={0};
    for(int i=0;i<10000;i++)
    {
    	km_travelled_array_each_day[i]=X;
    }
	//cout<<km_travelled_array_each_day[50];
	
	for(int i=0;i<N;i++)
    {
        cin>>t>>y;
        km_travelled_array_each_day[t]=y;
    }
    //cout<<km_travelled_array_each_day[t];
    long int days=1;
    km_travelled_prefix_array[0]=km_travelled_array_each_day[0];
    bool condition=true;
    while(condition)
    {
        km_travelled_prefix_array[days]=km_travelled_prefix_array[days-1]+km_travelled_array_each_day[days];
       // cout<<"days travel: "<<km_travelled_array_each_day[days]<<endl;
        //cout<<"prefix: "<<km_travelled_prefix_array[days]<<" "<<endl;
        if(km_travelled_prefix_array[days]>=S)
        {
            condition=false;
        }
        days++;
    }
    cout<<days;
    
    */
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
    long int days=1;
   
    while(true)
    {
    	it=travelled.find(days);
        if(it==travelled.end())
        {
        	prefix_sum=prefix_sum+X;
        }
        else
        {
        prefix_sum=prefix_sum+it->second;
        }
      
        if(prefix_sum>=S)
        {
            break;
        }
        days++;
    }
    printf("%ld",days);

    
    
    
}
