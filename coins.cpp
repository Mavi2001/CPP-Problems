#include <iostream>
using namespace std;

int main() {
    int i,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%5==0)
        {
            if(n%10 != 0)
            {
                cout<<n/10 + 1<<endl;
            }
            else
            cout<<n/10<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
	return 0;
}
