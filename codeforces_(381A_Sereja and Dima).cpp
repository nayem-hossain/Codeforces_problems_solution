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
using namespace std;

#define lli    long long int
#define ld     long double
#define ll     long long
#define ff     first
#define ss     second
#define sz(a)  (int)a.size()
#define mem(a,b)   memset((a), (b), sizeof(a))
#define pb         push_back
#define all(v)     (v).begin(), (v).end()
#define pii        pair<int ,int >
#define pll        pair<ll ,ll >
#define mp         make_pair
#define vi         vector<int >
#define vii        vector<pii>
#define vvi        vector < vi >
#define vll        vector < ll >
#define vllll      vector < pll >
#define vvll       vector < vll >
#define forn(i,n)  for(int i=0;i<(n);i++)
#define fori(i,s,e) for(int i=s,i<n;i++)
#define qi         queue <int >
#define qll        queue <ll >
#define in_r(x,y,n,m) (x>=0 && x<n && y>=0 && y<m)
#define maxn 1000009

#define rep(i,a,b)  for(lli i=a;i<b;i++)
#define repd(i,a,b) for(lli i=a-1;i>=b;i--)
#define nl          cout<<endl;
#define test()      lli t;cin>>t;while(t--)
#define sp(n)       setprecision(n)
#define MM(a,x)     memset(a,x,sizeof(a));
#define LN(x)       x.length()

#define lli     long long int
#define ulli    unsigned long long int
#define ld      long double
#define uld     unsigned long double
#define S       string
#define C       char
#define elif    else if

#define pb      push_back
#define pp      pop_back
#define mp      make_pair
#define plli    pair<lli,lli>
#define vlli    vector<lli>
#define vulli   vector<ulli>
#define vld     vector<ld>
#define vs      vector<string>

#define bs      binary_search
#define ub      upper_bound
#define lb      lower_bound

#define vsort(v) sort(v.begin(),v.end())

#define max1 1000001    //10^6 + 1
#define max2 10000001   //10^7 + 1
#define max3 1000000007 //10^9 + 7
#define inf  1000000009 //10^9 + 9
int main()
{
    int n,card_no,sajeras_point=0,dimas_point=0;
    cin>>n;
    vector<int>cards;
    for(int i=0; i<n; i++)
    {
        cin>>card_no;
        cards.push_back(card_no);
    }

    for(int i=0; i<n/2; i++)
    {
        if(cards.front()>cards.back())
        {
            sajeras_point=sajeras_point+cards.front();
            cards.erase(cards.begin());
        }
        else
        {
            sajeras_point=sajeras_point+cards.back();
            cards.pop_back();
        }
        if(cards.front()>cards.back())
        {
            dimas_point=dimas_point+cards.front();
            cards.erase(cards.begin());
        }
        else
        {
            dimas_point=dimas_point+cards.back();
            cards.pop_back();
        }
    }


    if(n%2==1)//OR, if(n%2!=0)
    {
        sajeras_point=sajeras_point+cards.front();
    }

    cout<<sajeras_point<<" "<<dimas_point<<endl;

    return 0;
}
