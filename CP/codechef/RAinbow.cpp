#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t--)
{
    long int n,input;
    cin>>n;
    vector<long int>v;
    for(long int i=0;i<n;i++)
    {
        cin>>input;
        v.push_back(input);
    }
    long int left=0,right=n-1,matching=0;
    vector<long int>rainbow={1,2,3,4,5,6,7};
    bool flag=true;
    while(left<=right)
    {
        if(left>0)
        {
            if(v[left]!=v[left-1])
                {
                    //cout<<rainbow[matching]<<" ";
                    matching++;

                }
        }
        if(v[left]!=rainbow[matching]||v[left]!=v[right]&&matching<7)
        {
        flag=false;
        break;
        }
        left++;
        right--;
    }
    if(flag&&matching==7)
        cout<<"yes\n";
    else
        cout<<"no\n";


}
}

