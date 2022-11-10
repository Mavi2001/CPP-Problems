#include <iostream>
using namespace std;

int fun(int n)
{
    int i,original,inverted=0,r,d;
    original = n;
    while(n>0)
    {
        r = n%10;
        d = n/10;
        n = d;
        inverted = 10*inverted + r;
    }
    if(original==inverted)
    return 1;
    else
    return 0;
}

int main() {
	int i,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>n;
	    fun(n);
	    if(fun(n)==1)
	    cout<<"wins"<<endl;
	    else
	    cout<<"loses"<<endl;
	}
	return 0;
}
