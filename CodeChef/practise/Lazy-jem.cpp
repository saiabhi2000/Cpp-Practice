#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int a, b;
        long long m;
        long long total = 0;
        cin >> a >> b >> m;
        while (a != 0)
        {
            if (a % 2 == 0)
            {
                total += ((a / 2) * m) + b;
                a = a - (a / 2);
                m *= 2;
            }
            else
            {
                total += m * ((a + 1) / 2) + b;
                a = a - (a + 1) / 2;
                m *= 2;
            }
        }
        cout << total << endl;
    }
    return 0;
}
