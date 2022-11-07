#include <iostream>
using namespace std;

int main() {
    int i,t,a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;
        if(a<b && a<c)
        cout<<"Draw"<<endl;
        else if(b<c && b<a)
        cout<<"Bob"<<endl;
        else if(c<a && c<b)
        cout<<"Alice"<<endl;
    }
	return 0;
}
