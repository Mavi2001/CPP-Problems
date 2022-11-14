#include <iostream>
using namespace std;

int fun(int n)
{
    int arr[1000],i,j,count = 0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=10 && arr[i]<=60)
        count = count + 1;
    }
    return count;
}

int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    cout<<fun(n)<<endl;
	}
	return 0;
}
