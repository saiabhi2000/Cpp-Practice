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
        int count=0,sum=0;
        fl(i,0,s.length())
        {
            if(s[i]=='0')
            {
                count++;
            }
            else if(s[i]=='1')
            {
                sum++;
            }
        }
        if(count==1 || sum==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;

    }
    return 0;
}