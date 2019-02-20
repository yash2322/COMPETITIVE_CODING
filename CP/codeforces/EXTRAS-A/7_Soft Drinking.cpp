#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
    //varibales bacchaney k liye ek se hi kiya iss liye baar baar if ka chodh ni to ek baar main hi min :
long int n,k,l,c,d,p,nl,np,min_=INT_MAX,total_samagri_each;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
total_samagri_each=(k*l)/nl;  //drink;
if(min_>total_samagri_each)
    min_=total_samagri_each;
total_samagri_each=(c*d);   //limes;
if(min_>total_samagri_each)
    min_=total_samagri_each;
total_samagri_each=p/np;
if(min_>total_samagri_each)
    min_=total_samagri_each;
cout<<min_/n;
}
