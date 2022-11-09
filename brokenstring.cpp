#include <iostream>
using namespace std;
int fun(int n)
{
    char str[n];
    int count=0,i;
    for(i=1;i<=n;i++)
    {
        cin>>str[i];
    }
    for(i=1;i<=n/2;i++)
    {
        if(str[i]==str[n/2 + i])
        count = count+1;
    }
	    return count;
}
int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    if(fun(n)==n/2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
