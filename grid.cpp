#include <iostream>
using namespace std;

int main() {
	int t,n,m,area;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    area = m*n;
	    m = m - m%2;
	    n = n - n%2;
	    if(m==1 || n==1)
	    cout<<m*n<<endl;
	    else
	    {
	      m = m - m%2;
	      n = n - n%2;
	      cout<<area - m*n<<endl;
	    }
	}
	return 0;
}
