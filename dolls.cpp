#include <iostream>
using namespace std;

int fun(int n)
{
    int i,j,k,flag=0;
    int arr[100],brr[100];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            flag = flag + 1;
        }
        brr[i] = flag;
        flag = 0;
    }
    for(i=0;i<n;i++)
    {
        if(brr[i]%2 != 0)
        k = arr[i];
    }
    return k;
}

int main() {
	int i,t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cout<<fun(n)<<endl;
	}
	return 0;
}
