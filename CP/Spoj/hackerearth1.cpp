#include<bits/stdc++.h>
using namespace std;

long long solve (vector<int> S, int k, int n)
{
    long long final_=0;
    vector<pair<long long,long int>>s2;
    for(long long int i=0;i<n;i++)
    {
        s2.push_back({S[i],i});
    }
    sort(s2.begin(),s2.end());
    for(long long int i=0;i<n;i++)
    {
        upper_bound(s2.begin()+s2[i].second,s2.end())
    }

    for(long long int j=0;j<mid_index.size();j++)
    {
          cout<<s2[i].first<<endl;
          cout<<s2[j].first<<endl;
         // final_+=pow(2,(-(s2[i].second)-1);
    }
  }
  return final_;
}
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<int> S(n);
    for(int i_S=0; i_S<n; i_S++)
    {
    	cin >> S[i_S];
    }

    long long out_;
    out_ = solve(S, k, n);
    cout << out_;
}
