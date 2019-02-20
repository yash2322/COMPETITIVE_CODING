#include <bits/stdc++.h>
using namespace std;

#define FORI(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a-1;i>=b;i--)
#define uu pair<ull,ull>

long int yash(long int a,long int b,long int c,map<long int,long int> &new_map)
{
	cout<<"IN yash\n";
	long int S,X,N;
   // cin>>S>>X>>N;
    S=a;
    X=b;
    N=c;
    	cout<<" S: "<<S<<" X: "<<X<<" N: "<<N<<endl;
    long int t,y,prefix_sum=0;
    map <long int,long int> travelled(new_map.begin(),new_map.end()); 
    map<long int,long int>:: iterator it;
      
//	for (it = travelled.begin(); it != travelled.end(); ++it) 
  //  { 
    //    cout  <<  "\t f-" << it->first  
     //         <<  "\t s-" << it->second << '\n'; 
    //} 
    
    long double z=ceil(S/double(X));

    
    long int days,return_value;
    it=travelled.begin();
    if(z<(it->first))
    {
    	return_value=z;
        cout<<z<<endl;
    }
    else
    {
    days=it->first;
    days--;
    prefix_sum=days*X;
    days++;
    
    while(true)
    {
    
    	
    	if((it->first)==days&&(it!=travelled.end()))
    	{
    	
    		 prefix_sum=prefix_sum+(it->second);
    		 days++;
    		 it++;
    		 
    	}
    	else
    	{
    	if(it!=travelled.end())
    	{
    	prefix_sum=prefix_sum+(((it->first)-days)*X);
    	
    	
		days=(it)->first;
    	}
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
    return_value=days-1;
    printf("%ld",days-1);
    
}
return return_value;
}


typedef unsigned long long ull;

bool sortbyFirst(const uu& a,const uu& b){
    return a.first<=b.first;
}
void moveBySomeDistance(ull &S,ull X,ull &noOfDays,ull normalDays){
  //  cout<<"S: "<<S<<"; X: "<<X<<"; noOfDays: "<<noOfDays<<"; NormalDays: "<<normalDays<<"\n";
    if(normalDays*X>=S){
        // I am going to reach in any way!
        if(S<=X){
            noOfDays+=1;
        }else{
            noOfDays += S/X;
            S = S%X;
            if(S!=0)
                noOfDays+=1;
        }
        S = 0;
    }else if(normalDays*X<S){
        // See how much can you go
        noOfDays+=normalDays;
        S-=normalDays*X;
    }
}
int main(int argc, char const *argv[])
{
	while(true)
	{
	map<long int,long int>:: iterator itr;
    ull S,X,T,Y,S2;
    int N;
    S=rand()%99999999+1;
   	S2=S;
    X=rand()%99999999;
    N=rand()%1000;
    vector<uu>qarr(N);
    map <long int,long int> travelled_m; 
    FORI(i,0,N){
        T=rand()%99999999+1;
        Y=rand()%99999999;
        qarr[i] = {T,Y};
        travelled_m.insert(pair <long int,long int> (T,Y)); 
    }
    sort(qarr.begin(),qarr.end(),sortbyFirst);
    ull noOfDays = 0;
    ull temp;

    FORI(i,0,qarr.size()){    
        if(i == 0)
            temp = qarr[0].first - 1;
        else
            temp = qarr[i].first - qarr[i-1].first - 1;

        // Temp here denotes that for these many days you can go with original X distance!
        if(temp!=0){
            moveBySomeDistance(S,X,noOfDays,temp);
            if(S==0)
                break;
        }
        moveBySomeDistance(S,qarr[i].second,noOfDays,1);
        if(S==0)
            break;
        
    }
    if(S!=0){
        noOfDays+=S/X;
        S=S%X;
        if(S!=0)
            noOfDays++;
    }
    //cout<<noOfDays;
    
    long int d;
    char c;
    cout<<"b";
   d=yash(S2,X,N,travelled_m);
   cout<<d;
   if(d==noOfDays)
   {
   	cout<<"same";
   continue;
   	
   }
   else
   {
   	cin>>c;
   	cout<<d<<" "<<noOfDays<<endl;
   	cout<<" S: "<<S2<<" X: "<<X<<" N: "<<N<<endl;
   	for (itr = travelled_m.begin(); itr != travelled_m.end(); ++itr) 
    { 
        cout  <<  "\t f-" << itr->first  
              <<  "\t s-" << itr->second << '\n'; 
    }
	cin>>c; 
   }
}
    return 0;
}
