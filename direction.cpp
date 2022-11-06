#include <iostream>
using namespace std;

int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    if(n%4==0)
	    cout<<"North"<<endl;
	    else if(n%4==1)
	    cout<<"East"<<endl;
	    else if(n%4==2)
	    cout<<"South"<<endl;
	    else
	    cout<<"West"<<endl;
	}
	return 0;
}
