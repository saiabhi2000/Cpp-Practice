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
        char a[100];
        cin>>a;
        int count = 0,i=0;
        while(a[i]!='\0')
        {
            if((a[i]>=97 && a[i]<=122 )|| (a[i]>=65 && a[i]<=90 ))
            count++;
            i++;
        }
        cout<<count<<endl;
    }
    return 0;
}