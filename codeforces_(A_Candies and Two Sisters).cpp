#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int distribution;
    cin>> t;
        while(t--)
        {
            int n;
            cin>>n;
            if(n%2!=0){

                distribution=(n-1)/2;
            }
            else
                distribution=(n/2)-1;

    cout<<distribution<<endl;
        }
return 0;

}
