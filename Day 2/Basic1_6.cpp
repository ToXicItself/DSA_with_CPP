#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
       int a[n];
       int c=0;
       int d=1;
       for (int i= 0; i < n; i++)
       {
         int f= c+d;
         a[i]=d;
         c=d;
         d=f;
       }
    cout<<a[n-1];
       

       
}       
       