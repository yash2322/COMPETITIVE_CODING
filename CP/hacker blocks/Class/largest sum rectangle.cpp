#include<bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
#define FORE(i,a,b) for(long long int i=a-1;i>=0;i--)
#define MAX 1000000
#define FS ios_base::sync_with_stdio(false); \
cin.tie(NULL);
#define out(a) cout<<a;
#define pb(a) push_back(a)
#define pbp(a,b) push_back({a,b})
//#define out_pair(a(i)) cout<<a[i].first<<" "<<cout<<a[i].second;
typedef long long int ll;
using namespace std;
int kadane(int *temp,ll n){
    ll current_sum=0,final_sum=0;
    FORS(i,0,n){
        current_sum+=temp[i];
        if(current_sum>final_sum)
        final_sum=current_sum;
        if(current_sum<0)
        current_sum=0;
    }
    return final_sum;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>matrix;
    matrix.resize(n);
    FORS(i,0,n)
    matrix[i].resize(m);
    FORS(i,0,n){
        FORS(j,0,m){
            ll input;
            cin>>input;
            matrix[i][j]=input;
        }
    }
    // FORS(i,0,n){
    //     FORS(j,0,m){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    /* FORE(i,n,0)
    {
        vector<ll>sum_window(i);
        FORS(j,0,i)
        {
        FORS(i,0,n){
            
        }    
        }
    }*/
int result=INT_MIN;
FORS(i,0,m){ // for sliding of i;
int *temp_window=new int[n](); //initializes to zero
    FORS(j,i,m){
        //sum up
        FORS(k,0,n){
            temp_window[k]=temp_window[k]+matrix[k][j];
        }
        int kadane_ans=kadane(temp_window,n);
        if(result<kadane_ans)
        result=kadane_ans;
    }
}
cout<<result;
}