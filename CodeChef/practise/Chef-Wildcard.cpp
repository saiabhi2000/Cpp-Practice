#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main()
{
    int t;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int i = 0, f = 0;
        while (i < a.length())
        {
            if (a[i] == b[i] || a[i] == '?' || b[i] == '?')
            {
                i++;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 1)
            cout << "No"<<endl;
        else
            cout << "Yes"<<endl;
       
    }
    return 0;
}

