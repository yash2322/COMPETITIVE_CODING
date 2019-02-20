#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    long long int n,input,m,value,vasya=0,petya=0;
    vector<pair<long long int,long long int>> elements;
    cin>>n;
    FORS(i,0,n)
    {
        cin>>input;
        elements.push_back(make_pair(input,i));
    }
   /*  FORS(i,0,n)
    {

        cout<<elements[i].first<<" "<<elements[i].second<<endl;
    }*/
    cin>>m;
    sort(elements.begin(),elements.end());
    while(m--)
    {
        cin>>value;
        long long int first=0,last=n-1,mid=(first+last)/2;
        while(first<=last)
        {
        if(elements[mid].first==value)
            {
               // cout<<"mid = " <<mid;
            vasya+=elements[mid].second+1;
            petya+=n-elements[mid].second;
            break;
            }
            else if(elements[mid].first>value)
                last=mid-1;

            else
            first=mid+1;

        mid=(first+last)/2;
        }
    }
cout<<vasya<<" "<<petya;
}
