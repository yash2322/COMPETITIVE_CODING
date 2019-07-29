#include<bits/stdc++.h>
using namespace std;
int main(){
    long int N;
    cin>>N;
    int A[N];
    for(long int i=0;i<N;i++){
        cin>>A[i];
    }
    long int sum=0;
    for(long int i=0;i<N;i++){
        sum+=A[i];
    }
    cout<<sum/N<<" ";
    sort(A,A+N);
    if(N%2==0)
    cout<<(A[N/2]+A[(N/2)-1])/2<<endl;
    else
    cout<<A[N/2]<<endl;
}