#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
using namespace std;
int main()
{
long int l,r,a,current_minmum,temp;
cin>>l>>r>>a;
current_minmum=min(l,r);//minimum team having equal right or left hander
if(current_minmum==l){//if there are less left handers than right
    if((l+a)<=r){  //if adding allrounder are less than total right
      current_minmum=l+a;  //then team is l+a
    }
    else{
        temp=l+a-r;  //else the alrounder which are left after adding can now be distributed to both
        current_minmum=r+temp/2;
    }
}
else{
     if((r+a)<=l){
      current_minmum=r+a;
    }
    else{
        temp=r+a-l;
        current_minmum=l+temp/2;
    }
}
cout<<current_minmum*2<<endl;
}
