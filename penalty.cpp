#include <iostream>
using namespace std;
int fun()
{
    int arr[100],i,count1=0,count2=0;
    for(i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=10;i++)
    {
        if(i%2!=0)
        {
            if(arr[i]==1)
            count1=count1+1;
        }
        else
        {
            if(arr[i]==1)
            count2=count2+1;
        }
    }
    if(count1==count2)
    {
        return 0;
    }
    else if(count1>count2)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
int main() {
	int j,t;
	cin>>t;
	while(t--)
	{
	    cout<<fun()<<endl;
	}
	return 0;
}
