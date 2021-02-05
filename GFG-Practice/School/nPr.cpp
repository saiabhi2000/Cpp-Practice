#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
   {
        int i,a,r,n;
        cin>>n>>r;
        long long fact=1;
        for(i=0;i<=(r-1);i++)
        {
            fact=fact*(n-i);
        }
        cout<<fact<<endl;
    }
    return 0;
}
