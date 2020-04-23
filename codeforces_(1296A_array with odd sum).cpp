#include<bits/stdc++.h>
#include<iostream>
#define lli long long int
using namespace std;
int main()
{
    lli T,n,even;
    cin>>T;
    while(T--)
    {
        cin>>n;
        lli a[n];
        even=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int j=0; j<n; j++)
        {
            if(a[j]%2==0)
            {
                even++;
            }
        }
        if(even==n)//that is, every element-number is even.
        {
            cout<<"NO"<<endl;
        }
        else if(even==0&&n%2==0)//that is,the number of element(n) is even
                                //and every element-number is odd.
        {
            cout<<"NO"<<endl;
        }
        else if(1<=even<n)//in this case, even and odd element-number are mixed.
        {
            cout<<"YES"<<endl;
        }

    }

}
