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
        {
            cin>>b[i];
        }
        
        int c;
        int count = 0;
        cin>>c;
        for(int i=0;i<a;i++)
        {
            if(b[i]<=c)
            count++;
        }
        cout<<count<<"\n";
    }
    return 0;
}