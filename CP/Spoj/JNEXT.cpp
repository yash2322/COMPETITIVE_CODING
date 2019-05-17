#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--){
long int n,input;
vector<long int>values;
cin>>n;
for(long int i=0;i<n;i++){
cin>>input;
values.push_back(input);
}
bool flag=false;
for(long int i=values.size()-1;i>=1;i--){
    if(values[i-1]<values[i])
    {
        for(long int j=values.size()-1;j>=i;j--)
        {
            if(values[j]>values[i-1])
            {
                //cout<<values[j]<<" "<<values[i-1];
                long int temp=values[j];
                values[j]=values[i-1];
                values[i-1]=temp;
                break;
            }
        }
        sort(values.begin()+i,values.end());
        flag=true;
        break;
    }
}
if(flag==false)
    cout<<-1;
else
    for(long int i=0;i<values.size();i++)
        cout<<values[i];
cout<<endl;
}
}
