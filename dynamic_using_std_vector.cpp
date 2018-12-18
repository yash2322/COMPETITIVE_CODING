 									//dynamic allocation using std::vector<int> ___

#include<iostream>
#include<conio.h>
#include<vector>
using namespace std;
int main()
{
	size_t n;
	cin>>n;
	std::vector<long int> a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"lenght is"<<a.size();
	getch();
	return 0;
}
