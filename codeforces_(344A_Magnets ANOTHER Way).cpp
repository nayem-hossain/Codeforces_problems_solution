#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cunt=0;
    cin>> n;
    string s, initial_str=" ";
    for(int i=0; i<n; i++)
    {
        cin>>s;
        if(s!=initial_str)
        {
            cunt++;
        }
        initial_str=s;
    }
    cout<<cunt;

    return 0;
}
