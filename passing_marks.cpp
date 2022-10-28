#include <iostream>
using namespace std;

int main() {
	int i,t,A,B,C,T,a,b,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>A>>B>>C>>T>>a>>b>>c;
	    if(a>=A && b>=B && c>=C && (a+b+c)>=T && T<=300)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}
