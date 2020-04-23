#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int sum=1;
        int k=2;
        cin>>n;
        while(1)
        {
            sum=sum+k;
            if(n%sum==0)
            {
                break;
            }
            else
            {
                k=k*2;
                continue;
            }

        }
        x=n/sum;
        cout<<x<<endl;
    }
    return 0;
}
