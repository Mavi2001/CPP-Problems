#include <iostream>
using namespace std;

int fun(int x, int y)
{
    int d,k,p,q,i;
	    d = x/10 ; k = y/10;
	    for(i=1;i<=10;i++)
	    {
	        if(d==i-1 || (d==i && x%10==0))
	        {
	            p=i;
	            break;
	        }
	    }
	    for(i=1;i<=10;i++)
	    {
	        if(k==i-1 || (k==i && y%10==0))
	        {
	            q=i;
	            break;
	        }
	    }
	    if(p>q)
	    return p-q;
	    else
	    return q-p;
}

int main() {
	int i,t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    cout<<fun(x,y)<<endl;
	}
	return 0;
}
