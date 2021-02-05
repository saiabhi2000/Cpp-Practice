#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, m, b = 0;
        cin >> a;
        while(a != 0) {
            m = int(sqrt(a));
            a -= (m*m);
            b++;
        }
        cout << b << endl;
    
    }
    return 0;
}