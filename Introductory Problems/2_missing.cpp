#include<bits/stdc++.h>
using namespace std;
int missingNumber( vector<int> v , int n )
{
	int ans = -1 ; 
	vector<vector<int>> temp( n , vector<int>(2,1) ) ;
	for(int i = 0 ; i< n ; i++ )
	{
		temp[i][0] = i+1 ;
	}
	for( int i = 0 ; i<n-1 ;i++ )
	{
		int b = v[i] ;
		temp[b-1][1]--; 
	}
	for( int i = 0 ; i< n ; i++ )
	{
		if( temp[i][1] == 1 ) 
		{
			ans = temp[i][0] ;
		}
	}
	return ans ;
	
}
int main()
{
	int n ; 
	cin >> n ;
	vector<int> v (n);
	for ( int i = 0 ; i< n-1  ; i++ )
	{
		cin>> v[i];
	}

	int ans = missingNumber( v , n ) ;

	cout<<ans;

}
