/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	 map <int, int> gquiz1;        // empty map container 
  
    // insert elements in random order 
    gquiz1.insert(pair <int, int> (3, 60)); 
    gquiz1.insert(pair <int, int> (4, 20)); 
    gquiz1.insert(pair <int, int> (5, 50)); 
    gquiz1.insert(pair <int, int> (1, 40)); 
    gquiz1.insert(pair <int, int> (2, 30)); 
    
    gquiz1.insert(pair <int, int> (6, 50));  
    gquiz1.insert(pair <int, int> (7, 10)); 
     map <int, int> :: iterator itr; 
    cout << "\nThe map gquiz1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = gquiz1.begin(); itr != gquiz1.end(); ++itr) 
    { 
        cout  <<  "\t" << itr->first  
              <<  "\t" << itr->second << '\n'; 
    } 
}*/
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
    long int days;
    it=travelled.begin();
    days=it->first;
    days--;
    prefix_sum=days*X;
    days++;
    char c;
    while(true)
    {
    	cin>>c;
    	
    	if((it->first)==days&&(it!=travelled.end()))
    	{
    		cout<<"IN if"<<endl;
    		 prefix_sum=prefix_sum+(it->second);
    		 days++;
    		 it++;
    		 
    	}
    	else
    	{
    		cout<<"IN else"<<endl;
    	prefix_sum=prefix_sum+(((it->first)-days)*X);
    	cout<<"it firsy="<<it->first<<endl;
    	cout<<"days"<<days<<endl;
    	
		days=(it)->first;
		
    	}
    	if(it==travelled.end())
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


