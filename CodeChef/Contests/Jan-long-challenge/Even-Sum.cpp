#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

void work()
{
    long long n;
    cin>>n;
    long long b,odd,even;
    b=odd=even=0;
    for(long long i=0;i<n;i++)
    {
        cin>>b;
        if(b%2==0)
            even++;
        else
            odd++;
    }
    if(odd%2==1)
        cout<<"2\n";
    else
        cout<<"1\n";
}
int main() {
    long long t;
    cin>>t;
    while(t--)
        work();
}