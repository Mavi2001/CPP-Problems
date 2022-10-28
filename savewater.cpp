#include <iostream>
using namespace std;

int main() {
	int i,t,h,x,y,c;
	cin>>t;
	for(i=0;i<t;i++)
	{
	   cin>>h>>x>>y>>c;
	   if((y/2+x)<=c/h)
	   {
	       cout<<"YES"<<endl;
	   }
	   else
	   cout<<"NO"<<endl;
	}
	return 0;
}
