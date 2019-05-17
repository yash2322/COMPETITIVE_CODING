#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define st(v) sort(v.begin(),v.end())
#define stg(v) sort(v.begin(),v.end(),greater<int>())
#define str(v) sort(v.rbegin(),v.rend())

//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
using namespace std;
typedef long long int ll;
/*ll gcd(ll a,ll b){
    if(b==0)
        return a;
        return(b,a%b);
}*/
int main()
{
long int t;
long long int arr[6] = {10,9,8,7,6,5};
cin>>t;
while(t--)
{
    long long int n,v;
    cin>>n;
    /*v=n/10;
    if(n%10==0)
    {
       while(v--)
       {

           cout<<10<<" ";
       }
       cout<<endl;
    }
    else if(n%10>=5)
    {
        while(v--)
        {*/
    long long int counter = 0;
    if(n>5){
            while(n>10){
        n-=10;
        counter++;

    }
    long long int temp1,temp2;
    bool flag = false;
    if(n<5){
            flag = true;
        counter--;
        n+=10;
        for(int i=1;i<6;i++){
            if(n-arr[i]>=5){
                temp1 = arr[i];
                temp2 = n-arr[i];
            }

        }
    }
    for(long long int i=0;i<counter;i++){
        cout<<"10"<<" ";
    }
    if(flag){
            if(temp1>temp2)
        cout<<temp1<<" "<<temp2;
        else
            cout<<temp2<<" "<<temp1;
    }
    else{
        cout<<n<<" ";
    }
    }
    else{
        cout<<"-1";



}
cout<<endl;

}
return 0;
    }
