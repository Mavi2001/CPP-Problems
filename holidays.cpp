#include <iostream>
using namespace std;
int fun(int n)
{
    int arr[1000],i,flag=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==6||arr[i]==13||arr[i]==20||arr[i]==27 || arr[i]%7==0)
        flag=flag+1;
    }
    return 8+n-flag;
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
