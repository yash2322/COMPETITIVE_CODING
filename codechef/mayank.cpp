/* Author: Mayank Sharma
email: mayank04111998@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false);\
cin.tie(NULL);
#define TEST int T;\
cin>>T;
#define FORI(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define ci pair<char,int>
#define pb push_back
typedef long long ll;


int main(int argc, char const *argv[]){
    FAST;
    ll N,M,K,L;
    TEST;
    while(T--){
        cin>>N>>M>>K>>L;
        vector<ll>toCome(N);
            FORI(i,0,N)
                cin>>toCome[i];

            // Those who are already waiting when will they get time
            vector<ll>ARR(M);
            FORI(i,0,M)
                ARR[i]=(i+1)*L;

            sort(toCome.begin(),toCome.end());

            // IF i come at T == 1
            ll min_time = ARR[ARR.size()-1]+L;

            FORI(i,0,N){
                // check at toCome[i]
                // that if i appear at toCome[i] what will be the tym that it takes for me to reach rest
                // FORI(j,0,ARR.size()){
                if(i!=0){
                    ARR[ARR.size()-1]-=(toCome[i]-toCome[i-1]);
                }else{
                    ARR[ARR.size()-1]-=toCome[i];
                }
                // }

                if(ARR[ARR.size()-1]+L<min_time){
                    min_time = ARR[ARR.size()-1]+L;
                }
                ARR.pb(ARR[ARR.size()-1]+L);
            }
            //ouye krta hu fon thodi der m kya hua ruk papa ka kam h 5 min m ata h okk
            // FORI(j,0,ARR.size())
            ARR[ARR.size()-1]-=(K-toCome[N-1]);
            if(ARR[ARR.size()-1]+L<=min_time){
               min_time = ARR[ARR.size()-1]+L;
            }

            cout<<min_time;

        cout<<'\n';
    }
    return 0;
}
