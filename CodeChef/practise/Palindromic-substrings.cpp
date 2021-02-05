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
        char a[1000],b[1000];
        int sum = 0,i,j;
        cin>>a>>b;
        for(int i=0;i<strlen(a)&&sum == 0;i++){
            for(int j=0;j<strlen(b);j++){
                if(a[i] == b[j]){
                    cout<<"Yes"<<endl;
                    sum =1;
                    break;
                }

            }
        }
            if(sum == 0){
                cout<<"No"<<endl;
            }
        
    }
    return 0;
}