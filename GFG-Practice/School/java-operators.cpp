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
        int b;
        cin>>a;
        cin>>b;
        if(a>b)
        {
            cout<<a<<" is greater than "<<b<<endl;
        }
        else
        {
            cout<<a<<" is less than "<<b<<endl;
        }

    }
    return 0;
}