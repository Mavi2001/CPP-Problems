#include <iostream>
using namespace std;

int fun(int s)
{
    int i,flag=0;
    for(i=2;i<=s/2;i++)
    {
        if(s%i==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main() {
	int i,t,a,b;
	cin>>t;
	for(i=0;i<t;i++)
	{
	    cin>>a>>b;
	    if(fun(a+b)==0)
	    cout<<"Alice"<<endl;
	    else if(fun(a+b)==1)
	    cout<<"Bob"<<endl;
	}
	return 0;
}