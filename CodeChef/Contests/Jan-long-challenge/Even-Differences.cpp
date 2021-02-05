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
        int n,count =0,sum = 0,i;
        cin>>n;
        int a;
        for(int i=0;i<n;i++){
            cin>>a;
            if(a%2 == 0){
                count++;
        }
        else{
            sum++;
        }
        }
        cout<<min(count,sum)<<endl;
    }
    return 0;
}