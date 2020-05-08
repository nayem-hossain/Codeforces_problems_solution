#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, event_value,untreated_case=0,sum=0;
    cin>>n;
    vector<int>event;
    for(int i=0; i<n; i++)
    {
        cin>>event_value;
        event.push_back(event_value);
        sum=sum+event[i];
        if(sum<0)
        {
            untreated_case++;
            sum=0;
        }
    }

    cout<<untreated_case<<endl;

   return 0;
}
