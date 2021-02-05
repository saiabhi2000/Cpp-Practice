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
        int a,i,j;
        cin>>a;
        int b[a*a],c[a*a];
	    for(i=0;i<a*a;++i)
	    {
            cin>>b[i];
        }
	    for(j=0;j<a*a;++j)
	    {
            cin>>c[j];
        }
        for(int k=0;k<a*a;++k)
	    cout<<a[k]+c[k]<<" ";
	    cout<<endl;
	}
	return 0;
}
