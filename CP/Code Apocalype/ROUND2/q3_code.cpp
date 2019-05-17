#include<bits/stdc++.h>
using namespace std;
bool sortby(int a,int b){
    return a>b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
           // g = __gcd(g,arr[i]);
        }
        int g = arr[0];
        for(int i=1;i<n;i++){
            g = __gcd(g,arr[i]);
        }
        sort(arr,arr+n,sortby);
        int h = arr[0];
        for(int i = h;i>=1;i--){
                int a = d;
            for(int j = 0;j<n;j++){
                if()
            }
        }
        cout<<g<<endl;

    }
}
