#include <iostream>
using namespace std;
int fun(int n, int m,int k)
{
    int j,q,sum=0,arr[1000];
    for(j=0;j<k;j++)
	    {
	        cin>>arr[j];
	    }
	    cin>>q;
	    for(j=0;j<k;j++)
	    {
	        sum = sum+arr[j];
	    }
	    if(q<=10 && sum>=m)
	    {
	        return 1;
	    }
	    else
	    return 0;
	    
	    
}
int main() {
	int i,j,n,m,k,count=0;
	cin>>n>>m>>k;
	for(i=0;i<n;i++){
	    if(fun(n,m,k)==1)
	    {
	        count=count+1;
	    }
	}
	cout<<count;
	return 0;
}
