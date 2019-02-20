
#include <bits/stdc++.h>
#define FORS(i,a,b) for(long long int i=a;i<b;i++)
using namespace std;
int count_w(int arr[], int m, int N)
{
	int count[N + 1];
	memset(count, 0, sizeof(count));
	count[0] = 1;
	for (int i = 1; i <= N; i++)
		for (int j = 0; j < m; j++)

			if (i >= arr[j])
				count[i] += count[i - arr[j]];

	return count[N];

}
int main()
{
    long int t;
    cin>>t;
   FORS(i,0,t)
   {
       long int numbers,N;
       cin>>numbers>>N;
	int arr[numbers];
	FORS(j,0,numbers)
	{
	    cin>>arr[j];
	}
	int m = sizeof(arr) / sizeof(arr[0]);
		int result= count_w(arr, m, N);
		if(result>0)
            cout<<1<<endl;
        else
            cout<<0<<endl;
   }
}
