/*
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
On each move, you may increase the value of any element by one. What is the minimum number of moves required?
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n ;
	cin>>n ;
	vector<int> v(n);
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> v[i] ;
	}
	int i = 1 ;
	long long ans = 0 ;
	while( i < n ) 
	{
		if( v[i] < v[i-1] ) 
		{
			ans += abs( v[i] - v[i-1] ) ;
			v[i] = v[i-1] ;
		}

		i++;
	}
	cout<<ans;
}