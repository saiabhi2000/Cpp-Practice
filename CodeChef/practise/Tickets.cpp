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
        char a;
        int count = 0;
        cin>>s;
        for(int i=0;i<s.length()-1;i++){
            s[0]=a;
            if(s[i]%2 != a){
                count++;
            }
        }
        int b = count*2;
        if(b == s.length()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}