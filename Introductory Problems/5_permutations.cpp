#include<iostream>
using namespace std;

void print( int n )
{
		int i = 2 ;
		while( i <= n )
		{
			cout<<i<<" ";
			i =i +2 ;
		}

		i = 1 ;
		while( i <= n ) 
		{
			cout<<i<<" ";
			i = i+2 ;
		}
		
}

int main()
{
	int n ;
	cin>> n ; 
	if( n == 1 ) cout<< n ;
	else if( n < 4 ) cout<<"NO SOLUTION";

	else{
		print( n );
	}
}

