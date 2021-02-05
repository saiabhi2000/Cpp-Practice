#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fl(i, a, b) for (int i=a; i<=b; i++)
#define vect1d(v,T,n,init) vector<T> v(n,init)
#define vect2d(v,T,n,m,init) vector<vector<T>> v(n, vector<T>(m,init))

int main(){
    int t,a,b[100000];
    cin >> t;
    while(t--){
        cin>>a;
        for(int i=0;i<a;i++){
            cin>>b[i];
        }
        for(int i=0;i<a;i++){
            for(int j=i+1;j<a;j++){
                if(b[i]==b[j]){
                    b[i]=0;
                    b[j]=0;
                    
                }
            }
            
        }
        for(int i=0;i<a;i++){
            if(b[i]!=0){
                cout<<b[i]<<endl;
            }
        }
        
    }

	return 0;
}
