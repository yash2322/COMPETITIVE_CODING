#can be used to find a multiple of highest and second higehst in O(n)

#include<bits/stdc++.h>
using namespace std;
int main()
{
long int n,input,curr,final_=0;
cin>>n;
vector<long int>v;
for(long int i=0;i<n;i++)
{
cin>>input;
v.push_back(input);
}
stack<long int>st;
final_=v[0]^v[1];
//cout<<final_<<endl;
for(long int i=0;i<n;i++)
{
while(!st.empty()&&st.top()<=v[i])
{
    curr=v[i]^st.top();
    final_=max(curr,final_);
    st.pop();
    //cout<<"W="<<curr<<endl;
}
if(st.size()>=1)
{
curr=st.top()^v[i];
final_=max(final_,curr);
//cout<<"I="<<curr<<endl;
}
st.push(v[i]);
//cout<<v[i]<<" "<<final_<<endl;
}
cout<<final_<<endl;
}
