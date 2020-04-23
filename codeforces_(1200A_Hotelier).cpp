#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(10);

    int n;
    string s;
    cin>>n;
    cin>>s;
    for (int i=0; i<s.size(); i++)
    {
        if(s[i]=='L')
        {
            for(int i=0; i<10; i++)
            {
                if(v[i]==0)
                {
                    v[i]=1;
                    break;
                }
            }
        }
        else if(s[i]=='R')
        {
            for(int i=9; i>=0; i--)
            {
                if(v[i]==0)
                {
                    v[i]=1;
                    break;
                }
            }
        }
        //if(s[i]>='0'&&s[i]<='9')
        else
        {

            v[s[i] - '0'] = 0;
        }
    }
    for(int i=0; i<10; i++)
    {
        cout<<v[i];
    }
    cout<<endl;

    return 0;
}

