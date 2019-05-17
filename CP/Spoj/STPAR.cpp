#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1)
    {
        long int n,input,pass=1;
        cin>>n;
        if(n==0)
            break;
        stack<int>values;
        vector<long int>v;
        bool possible=true;
        for(long int i=0;i<n;i++)
        {
            cin>>input;
            v.push_back(input);
        }
        for(long int i=0;i<n;i++)
        {
            while(!values.empty()&&values.top()==pass)
            {

                pass++;
                values.pop();
            }
            if(v[i]==pass)
                pass++;

            else if(!values.empty()&&values.top()<v[i])
            {
                possible=false;
                break;
            }
            else
                values.push(v[i]);
        }
        if(possible)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;

//5 1 2 4 3

    }
}
