#include <iostream>
using namespace std;

int main() {
	int i;
	char x,y;
	cin>>x>>y;
	if(x==y)
	{
	    cout<<x;
	}
	else if(x=='R' || y=='R')
	{
	    cout<<"R"<<endl;
	}
	else if((x=='B' && y=='G')||(x=='G' && y=='B'))
	{
	    cout<<"B"<<endl;
	}
	return 0;
}
