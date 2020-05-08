#include<bits/stdc++.h>
using namespace std;

int main()
{
    int value,sum=0;
    vector<int>calory;
    for(int i=0; i<4; i++)
    {
        cin>> value;
        calory.push_back(value);
    }
    // for(int i=0; i<4; i++)
    //{
    //    cout<<calory[i]<<" ";
    //}
    string s;
    cin>> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            sum=sum+calory[0];
        }
        else if(s[i]=='2')
        {
            sum=sum+calory[1];
        }
        else if(s[i]=='3')
        {
            sum=sum+calory[2];
        }
        else if(s[i]=='4')
        {
            sum=sum+calory[3];
        }
    }
    cout << sum << endl;

    return 0;
}
