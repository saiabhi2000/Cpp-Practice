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
        string s;
        cin>>s;
        int count =0,color=0;
        fl(i,0,s.length()-1)
        {
            if(s[i]=='a')
            {
                count++;
            }
            else if(s[i]=='b')
            {
                color++;
            }
        }
        if(count>color)
        {
            cout<<color<<endl;
        }
        else
        {
            cout<<count<<endl;
        }
        
    }
    return 0;
}