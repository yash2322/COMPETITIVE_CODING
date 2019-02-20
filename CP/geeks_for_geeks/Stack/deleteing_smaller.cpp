#include <bits/stdc++.h>
using namespace std;

int main()

{
int t,n,deleted=0;
cin>>t;
stack<int> st; 
for(int i=0;i<t;i++)
{
    cin>>n;
    int ar[n];
    for(int j=0;j<n;j++)
    {
        cin>>ar[j];
    }
    cin>>deleted;
    int x=0;
   
    for(int k=0;k<n;k++)
    {
    	
        if(st.empty())
        {	
      
            st.push(ar[k]);   
        }
        else
        {
        
            if((!st.empty())&&(x<deleted))
            {
            
            	
            	while((ar[k]>st.top())&&(!st.empty()))   
				{
				         
                st.pop();
                
                
                x++;
            }
                
            }
           
         st.push(ar[k]); 
		
		
		 
		 
		
        }


}
 while(!st.empty())
		 {
		 	cout<<st.top()<<" ";
		 	st.pop();
		 }
cout<<endl;
x=0;

	return 0;
}
}
