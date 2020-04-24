#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,acunt=0,dcunt=0;
    string s;
    cin>> n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
        {
            acunt=acunt+1;
        }
        else if(s[i]=='D'){
            dcunt=dcunt+1;
        }
    }
    if(acunt>dcunt){
        cout<<"Anton"<<endl;
    }
    else if(acunt<dcunt){
        cout<<"Danik"<<endl;
    }
    else{
        cout<<"Friendship"<<endl;
    }

    return 0;
}
