#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int i,flag=0,mark=0;
	    cin>>s;
	    int n = s.length();
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='a')
	        flag = flag + 1;
	        else
	        mark = mark + 1;
	    }
	    if(mark>flag)
	    cout<<flag<<endl;
	    else
	    cout<<mark<<endl;
	}
	return 0;
}
