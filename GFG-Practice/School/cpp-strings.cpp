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
        string a;
        string b;
        cin>>a;
        cin>>b;
        if(a.length()>b.length())
        {
            cout<<a.length()<<endl;
        }
        else (b.length()>a.length())
        {
            cout<<b.length()<<endl;
        }
        cout<<a+b<<endl;

    }
    return 0;
}