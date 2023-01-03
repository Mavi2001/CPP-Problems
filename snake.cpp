#include <iostream>
using namespace std;

int main() {
	int i,t,n,flag=0,count1 = 0,count2 = 0,kick;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    char arr[100];
	    for(i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(i = 0;i<n;i++)
	    {
	        if(arr[i]=='H')
	        {
	            flag = 1;
	            count1+=1;
	            
	        }
	        else if(arr[i]=='T')
	        {
	            flag = flag*2;
	            count2+=1;
	            if(count2>count1)
	            {
	                kick = 0;
	                break;
	            }
	            
	        }
	    }
	    if(count1==count2 && flag==2)
	    cout<<"Valid"<<endl;
	    else if(kick=0)
	    cout<<"Invalid"<<endl;
	    else
	    cout<<"Invalid"<<endl;
	}
	return 0;
}
