#include <iostream>
using namespace std;

int main() {
	int i,j,k,p,t,a[3];
	cin>>t;
	for(i=0;i<t;i++)
	{
	    for(j=0;j<3;j++)
	    cin>>a[j];
	    for(j=0;j<3;j++)
	    {
	        for(p = j+1;p<3;p++)
	        {
	        if(a[j]>a[p])
	        {
	            k = a[j];
	            a[j] = a[p];
	            a[p] = k;
	        }
	        }
	    }
	    cout<<a[1]<<endl;
	}
	return 0;
}
