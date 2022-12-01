#include <iostream>
#include<string>
using namespace std;

int main() {
	int t; cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n = s.length();
	    int k=0;
	    for(int i=0;i<n-1;i+=2){
	        if(s[i]==s[i+1]){
	            k++;
	            break;
	        }
	    }
	    if(k==0){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
