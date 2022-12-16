#include <iostream>
using namespace std;

int main() {
	int i,t,a,b,s;
	cin>>t;
	while(t--)
	{
	    int r,k,sum = 0;
	    cin>>a>>b;
	    s = a+b;
	    while(s)
	    {
	        r = s%10;
	        if(r==1)
	        {
	            k = 2;
	        }
	        else if(r==2 || r==3 || r==5)
	        {
	            k = 5;
	        }
	        else if(r==4)
	        {
	            k = 4;
	        }
	        else if(r==7)
	        {
	            k = 3;
	        }
	        else if(r==0 || r==6 || r==9)
	        {
	            k = 6; 
	        }
	        else
	        {
	            k = 7;
	        }
	        sum = sum + k;
	        s = s/10;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
