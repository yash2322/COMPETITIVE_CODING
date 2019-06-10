#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
    long int result=0,current_max,i=0,top_pointer,n,input;
    cin>>n;
    if(n==0)
        break;
    vector<long int>v;
    for(long int j=0;j<n;j++)
    {
        cin>>input;
        v.push_back(input);
    }
    stack<long int>indexes;
while(i<n)
{
    if(indexes.empty()||v[indexes.top()]<=v[i])
        indexes.push(i++);
    else{
        top_pointer=indexes.top();
        indexes.pop();
        current_max=v[top_pointer]*(indexes.empty()?i:i-indexes.top()-1);
        if(current_max>result)
            result=current_max;
    }
}
while(!indexes.empty())
{
    top_pointer=indexes.top();
    indexes.pop();
    current_max=v[top_pointer]*(indexes.empty()?i:i-indexes.top()-1);
    if(current_max>result)
        result=current_max;
}
cout<<result<<endl;
}
}
