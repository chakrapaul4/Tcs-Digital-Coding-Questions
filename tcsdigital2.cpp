#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	vector <int> v;
	for(int i=k;i<n;i++)
	{
		v.push_back(arr[i]);
	}
	for(int i=0;i<=k-1;i++)
	{
       v.push_back(arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
	return 0;

}