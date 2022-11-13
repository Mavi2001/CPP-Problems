#include <iostream>
using namespace std;

int fun2(int i, int n, char s[])
{
    int j,k,flag[n];
    for(k=0;k<n;k++)
    {
        flag[k]=0;
    }
    for(j=0;j<n;j++)
    {
        if(s[i]==s[j])
        {
            flag[i] = flag[i] + 1;
        }
    }
    return flag[i];
}

int fun(int n)
{
    int i,j,flag[n],count = 0;
    char s[n];
    // for(i=0;i<n;i++)
    // {
    //     flag[i]=0;
    // }
    cout<<"Enter the strings:";
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        flag[i] = fun2(i,n,s);
        // for(j=0;j<n;j++)
        // {
        //     if(s[i]==s[j])
        //     flag[i] = flag[i] + 1;
        // }
    }
    for(i=0;i<n;i++)
    {
        if(flag[i]%2==0)
        count = count + 1;
    }
    if(count==n)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}

int main()
{
    int i,t,n;
    cout<<"Enter the value of t: ";
    cin>>t;
    for(i=0;i<t;i++)
    {
        cout<<"Enter the value of n: ";
        cin>>n;
        fun(n);
    }

    return 0;
}