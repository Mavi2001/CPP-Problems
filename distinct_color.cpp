// #include <bits/stdc++.h>
#include<iostream>
using namespace std;


int main() {
	int i,t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int arr[1000];
	    int max = INT_MIN;
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        if(arr[i]>max)
	        max = arr[i];
	    }
	    cout<<max<<endl;
	}
	return 0;
}
