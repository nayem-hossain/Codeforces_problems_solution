 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     long long int n,m,a,x,y,need;
     cin>>n>>m>>a;
     x=n/a;
     y=m/a;
     if(n%a==0)
     {
         x=x;
     }
     else{
        x=x+1;
     }
     if(m%a==0)
     {
         y=y;
     }
     else{
        y=y+1;
     }
     need=x*y;
     cout<<need;
     return 0;
 }
