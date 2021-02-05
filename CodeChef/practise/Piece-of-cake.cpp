#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t;
    cin >> t;
    int count = 0;
    while(t--){
        string s;
        cin>>s;
        sort(s.begin(),s.end());
        char a =s[0]; int b=0,c=0;
        for(int i=0;i<s.size();i++){
            if(a==s[i])
                b++;
            else
            {
                a = s[i];
                b = 1;
            }
            c = max(c,b);
        }
            if(c*2 == s.size())
            cout<<"YES"<<endl;
            else
            {
                cout<<"NO"<<endl;
            } 
    }
    return 0;
}