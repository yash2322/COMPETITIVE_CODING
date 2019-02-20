#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
int n,input;
cin>>n;
vector<pair<int,int>> cards(n);
FORS(i,0,n)
{
cin>>input;
cards[i]={input,i+1};
}
sort(cards.begin(),cards.end());
FORS(i,0,n/2)
{
cout<<cards[i].second<<" "<<cards[n-1-i].second<<endl;
}

}
