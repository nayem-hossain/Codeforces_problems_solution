#include<bits/stdc++.h>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <list>
#include <bitset>
#include <string>
#include <utility>
#include <iterator>
#include <fstream>
#include <sstream>
#include <numeric>
#include <functional>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
#include <climits>
#include <ctime>
#include <cassert>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x;
    cin>>t;
    while(t--)
    {
        int sum;
        int k=2;
        cin>>n;
        while(1)    //instead of  for(int i=0 ; ; i++){};
        {
            sum=(pow(2,k)-1/(2-1));
            if(n%sum==0)
            {
                break;
            }
            else
            {
                k++;
                continue;
            }
        }
        x=n/sum;
        cout<<x<<endl;
    }
    return 0;
}

