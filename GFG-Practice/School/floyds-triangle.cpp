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
        int a,count=1;
        cin>>a;
        for(int i=0;i<a;i++)
        {
            for(int j=0;j<=i;j++){
                cout<<count<<" ";
                count++;
            }
            cout<<endl;
        }
    }
    return 0;
}