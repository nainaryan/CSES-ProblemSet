/*
	You are given a DNA sequence: a string consisting of characters A, C, G, and T.
	Your task is to find the longest repetition in the sequence.
	This is a maximum-length substring containing only one type of character.
*/

#include<bits/stdc++.h>
using namespace std;
int repeat( string str , int n )
{
	int ans = INT_MIN ;
	int i = 0 , j = 0 ; 
	while( j < n )
	{
		if(str[j]== str[i] )
		{
			ans = max( ans , j-i+1 ) ;
			j++ ;
		}
		else {
			i=j ;
			j++;
		}
	}
	return ans;
}
int main() 
{
	string str ;
	cin>>str;
	int n = str.length() ;
	int ans = repeat( str , n );
	cout<< ans ;
}