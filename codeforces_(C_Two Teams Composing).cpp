#include<bits/stdc++.h>
using namespace std;
int main ()
{

    int t;
    vector<int>V;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int input;
            cin>>input;
            V.push_back(input);
        }
    }
}
#include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t,n,h,a ;
        cin>> t ;
        while(t--)
        {
            cin>> n ;

            h=n;
            vector <int> vec ;
            while(n--)
            {
                cin>> a ;
                vec.push_back(a);
            }

            int ue =set<int>( vec.begin(), vec.end() ).size();


            int t = *max_element(vec.begin(), vec.end()) + 1;
            int c[t];
            for (int i = 0; i < t; i++)
                c[i] = 0;
            for (int i = 0; i < h; i++)
                c[vec[i]]++;

            int mode = 0;
            int k = c[0];
            for (int i = 1; i<t; i++)
            {
                if (c[i] > k)
                {
                    k = c[i];
                    mode = i;
                }
            }
            int se = count(vec.begin(),vec.end(),mode);
            if(se > ue)
                cout << min(h,ue) << endl ;
            else if(ue>se)
                cout << min(h,se) << endl ;
                else if(ue==1)
                cout << 0 << endl ;
            else
                cout << se-1 << endl;



        }
        return 0;
    }
