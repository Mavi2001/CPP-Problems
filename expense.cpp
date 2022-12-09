#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t,n,x,sum;
	cin>>t;
	while(t--)
	{
	    cin>>n>>x;
	    sum = pow(2,x);
	    while(n--)
	    {
	        sum = sum/2;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
