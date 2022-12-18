#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--)
	{
	    int flag = 0,sum = 0;
	    cin>>n;
	    if(n<3)
	    {
	        cout<<"0"<<endl;
	    }
	    else{
	    while(n>3)
	    {
	        n = n-2;
	        flag = flag + 1;
	    }
	    while(flag)
	    {
	        sum = sum + flag;
	        flag = flag - 1;
	    }
	    cout<<sum<<endl;
	    }
	}
	return 0;
}
