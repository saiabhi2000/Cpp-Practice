#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int a,b;
    int sum=0;
    cin>>a>>b;
    sum=a-b;
    if(sum%10==9)
    {
        cout<<sum-1<<endl;
    }
    else
    {
        cout<<sum+1<<endl;
    }
    return 0;
}
    