#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    string a;
    getline(cin, a);
    while(t--){
        string s;
        vector<string> a;
        getline(cin,s);

        int vali = 0;

        fl(i,0,s.length()-1){
            if (isdigit(s[i])){
                vali = 1;
                if (isdigit(s[i+1]))
                    cout << s[i];
                else
                    cout << s[i] << " ";
            }
        }
        if (vali == 0)
            cout << "No Integers" << endl;
        else
            cout << endl;
    }
}