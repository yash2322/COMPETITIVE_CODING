#include<bits/stdc++.h>
using namespace std;
int main () {
	long int t;
	cin>>t;
	while(t--){
	    long int n,input;
	    cin>>n;
	    vector<long int>v;
	    for(long int i=0;i<n;i++)
	    {
	        cin>>input;
	        v.push_back(input);
	    }
	    long int sets=pow(2,n);
	    long int final_max=0;
	    //cout<<sets<<endl;
	    for(long int c=0;c<sets;c++)
	    {
	       // cout<<c<<endl;
	        long int current_max=0;
	        vector<long int>temp;
	        for(long int j=0;j<v.size();j++){
	            if(c&(1<<j))
	                temp.push_back(v[j]);
	        }

	        if(temp.size()==1)
	            current_max=temp[0];
	       else if(temp.size()>1){
//                cout<<"yes\n"<<" "<<temp.size()<<endl;

	           long int value=temp[0];
	           for(long int x=1;x<temp.size();x++)
	           {

	               int op=x%3;
	               if(op==1)
	                value=value^temp[x];
	                else if(op==2)
	                    value+=temp[x];
	               else
	               value=value|temp[x];
	           }
	           current_max=value;


	       }
            if(current_max>final_max)
	            final_max=current_max;
	    }
	    if(final_max%2==0)
	        cout<<"Even\n";
	   else
	    cout<<"Odd\n";
	}

}
