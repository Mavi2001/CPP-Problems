#include <iostream>
using namespace std;

int main() {
	int i,j,k,t;
	char a[1000],b[1000];
	cin>>t;
	for(i=0;i<t;i++)
	{
	    for(k=0;k<5;k++)
	    {
	        cin>>a[k];
	    }
	    for(k=0;k<5;k++)
	    {
	        cin>>b[k];
	    }
	    for(j=0;j<5;j++)
	    {
	        if(a[j]==b[j])
	        cout<<"G";
	        else
	        cout<<"B";
	    }cout<<endl;
	}
	return 0;
}
