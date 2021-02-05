#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int n[3]={0};
        cin>>a;
        string s;
        cin>>s;
        for(int i=0;i<a;i++)
        {
            if(s[i]=='R')
            {
                n[0]+=1;
            }
            else if(s[i]=='G')
            {
                n[1]+=1;
            }
            else
            {
                n[2]+=1;
            }
        }
        sort(n , n+3);
        cout<<n[0]+n[1]<<endl;
    }
    return 0;
}