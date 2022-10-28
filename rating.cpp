#include <iostream>
using namespace std;

int main() {
	int i,j,t,s;
	cin>>t;
	for(j=0;j<t;j++)
	{
	    cin>>s;
	    for(i=1;i>0;i++)
	    {
	        if(i-1==s)
	        {
	            cout<<-i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
