#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int i,t;
	double ls,rs,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>b>>ls;
	    cout<<sqrt(pow(ls,2)-pow(b,2))<<" "<<sqrt(pow(ls,2)+pow(b,2))<<endl;
	}
	return 0;
}
