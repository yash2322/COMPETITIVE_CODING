#include <bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
typedef unsigned long long ull;
using namespace std;
bool sorting(int a,int b)
{
    return a>b;
}
int main()
{
long int n,k,t;
cin>>t;

    FORS(i,0,t)
    {
    bool flag;
    cin>>n>>k;
    flag = true;
    vector<int> a;
    FORS(i,0,n){
        int temp;
        cin>>temp;
        a.push_back(temp);
        }
        sort(a.begin(),a.end(),sorting);
        FORS(i,0,n)
        {
        if(k%a[i]==0)
            {
            flag = false;
            cout<<1<<endl;
            break;
            }
        }
        if(flag){
        FORS(i,0,n){
            if(k<=0){
                cout<<1<<endl;
                flag = false;
                break;
            }
            else{
                k = k%a[i];
            }
        }
        if(flag)
            cout<<0<<endl;
    }
    }

    }
