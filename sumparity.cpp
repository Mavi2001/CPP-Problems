#include <iostream>
using namespace std;

int fun(int n)
{
    int i;
    int arr[100],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    if(sum%2==0)
    return 1;
    else
    return 0;
}

int main() {
	int t,n,k;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    k=fun(n);
	    if(k==1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
