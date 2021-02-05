#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,d;
        cin>>a>>b;
        string c[a];
        for(int i=0;i<a;i++)
        {
            cin>>c[i];
        }

        for(int j=0;j<b;j++)
        {
            cin>>d;
            string e;
            for(int k=0;k<d;k++)
            {
                cin>>e;
                for (int l=0;l<a;l++)
                {
                    if(c[l]==e)
                    c[l]="YES";  
                }
            }

        }
        for(int i= 0;i<a;i++)
        {
            if(c[i] != "YES")
            {
                c[i]="NO";
            }
       
        }
        for(int i= 0;i<a;i++)
        {
            cout<<c[i]<<" ";
        }
    }
    return 0;
}