#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> box;
    int c;
    cin>>c;
    while(c--)
    {
        int a;
        cin>>a;
        box.push_back(a);
    }

    sort(box.begin(),box.end());
    for(int i=0;i<box.size();i++)
    {
        cout<<box[i]<<" ";
    }

    return 0;
}
