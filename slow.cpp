#include <iostream>
#include<math.h>
using namespace std;
int main() {
	int t,mt,mn,sn,k;
	cin>>t;
	while(t--)
	{
	    cin>>mt>>mn>>sn;
	    k = 0;
	    while(mt--)
	    {
	        if(mn<=sn)
	        {
	            k+=pow(mn,2);
	            sn-=mn;
	        }
	        else
	        {
	            k+=pow(sn,2);
	            break;
	        }
	    }
	    cout<<k<<endl;
	    
	}
	return 0;
}
