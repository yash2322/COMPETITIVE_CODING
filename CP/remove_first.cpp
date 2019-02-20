#include<bits/stdc++.h>
using namespace std;
unsigned int remove_first_digit( unsigned int n )
{
    if( n < 10 ) return 0 ;
    else
	{
	cout<<n%10 <<"+"<< remove_first_digit(n/10) * 10 ;
	
	
	 return n%10 + remove_first_digit(n/10) * 10 ;
}
}

int main()

{
int x=	remove_first_digit(3237);
	cout<<x;
}


