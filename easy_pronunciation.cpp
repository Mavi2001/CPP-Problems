#include <iostream>
using namespace std;
int fun(int n)
{
    int i,count=0;
    char arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
        {
            count=0;
        }
        else
        {
            count=count+1;
        }
        if(count==4)
        {
            return 1;
            break;
        }
    }
    return 2;
}
int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    if(fun(n)==1)
	    cout<<"NO"<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
