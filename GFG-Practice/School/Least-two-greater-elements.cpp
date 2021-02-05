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
        int a;
        cin>>a;
        int b[a];
        for(int i=0;i<a;i++)
        cin>>b[i];
        sort(b[0],b[0]+a);
        for(int i=0;i<a-3;i++)
        cout<<b[i]<<" ";
    }
    return 0;
}