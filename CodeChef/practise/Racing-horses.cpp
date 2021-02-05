#include <bits/stdc++.h>
#include<stdlib.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,min{1000000000};
        cin>>a;
        int b[a],c[a];
        for(int i=0;i<a;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                if(min>abs(b[i]-b[j]))
                    min=abs(b[i]-b[j]);
            }
        }
        cout<<min<<endl;
    }
    return 0;
}