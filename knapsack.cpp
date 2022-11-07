#include <iostream>
#include<math.h>
using namespace std;

void fun(int n,int m, double p[], double w[])
{
    int i,j,b,c,we,weight=0;
    double a, pw[1000],profit=0;
    
    for(i=0;i<n;i++)
    {
        pw[i] = p[i]/w[i];
    }
 for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j) 
            {
                if (pw[i] < pw[j]) 
                {
                    a = pw[i];
                    pw[i] = pw[j];
                    pw[j] = a;
                    
                    b = w[i];
                    w[i] = w[j];
                    w[j] = b;
                    
                    c = p[i];
                    p[i] = p[j];
                    p[j] = c;
                }
            }
        }
        // for(i=0;i<n;i++)
        // {
        //     cout<<pw[i]<<" ";
        // }
        // for(i=0;i<n;i++)
        // {
        //     cout<<w[i]<<" ";
        // }
        // for(i=0;i<n;i++)
        // {
        //     cout<<p[i]<<" ";
        // }
        for(i=0;i<n;i++)
        {
            weight = weight+w[i];
            if(weight<=20)
            {
            we = weight;
            profit = profit+p[i];    
            }
            else
            {
                profit = profit + ((m-we)/w[i])*p[i];
            }
        }
        cout<<profit;
}

int main()
{
    double p[1000],w[1000],weight=0;
    double pw[1000],profit=0;
    int i,m,n;
    cout<<"Enter the size of the arrays: ";
    cin>>n;
    cout<<"Enter the maximum capacity: ";
    cin>>m;
    cout<<"Enter the profit array: ";
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Enter the weight array: ";
    for(i=0;i<n;i++)
    {
        cin>>w[i];
    }
    fun(n,m,p,w);
    
    return 0;
}
